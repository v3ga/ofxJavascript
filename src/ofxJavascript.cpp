#include "ofxJavascript.h"
#include "ofxJSScript.h"

ofxJavascript*					ofxJavascript::smp_instance			= 0;
uint32							ofxJavascript::sm_branchCount		= 1;
ofxJavascript::jsPrintCallBack	ofxJavascript::mp_printCallback		= 0;
void*			ofxJavascript::mp_userData			= 0;

JSClass ofxJavascript::sm_globalClass = 
{
  "Global", 0,
  JS_PropertyStub,  JS_PropertyStub,JS_PropertyStub, JS_PropertyStub,
  JS_EnumerateStub, JS_ResolveStub, JS_ConvertStub,  JS_FinalizeStub,
  0, 0, 0, 0, 0, 0, 0, 0
};

//--------------------------------------------------------------
ofxJavascript::ofxJavascript()
{
	mp_runtime		= 0;
	mp_context		= 0;
	mp_jsGlobals	= 0;
}


//--------------------------------------------------------------
ofxJavascript::~ofxJavascript()
{
	smp_instance = 0;
}

//--------------------------------------------------------------
int	 ofxJavascript::initialize()
{
	int err=0;

	// Callback (default)
	setPrintCallback(this, &defaultPrintCallback);

	// Runtime 
	mp_runtime = JS_NewRuntime(8L * 1024L * 1024L); // TODO : put this as parameters ? 
	if (mp_runtime)
	{
		mp_context = JS_NewContext(mp_runtime, 8192); // TODO : parameters ? 
		if (mp_context)
		{
				mp_jsGlobals = JS_NewObject(mp_context, &sm_globalClass, 0, 0);
				if (mp_jsGlobals)
				{
					JS_InitStandardClasses	(mp_context, mp_jsGlobals);
					JS_DefineFunction		(mp_context, mp_jsGlobals, "print",		jsPrint, 	2, 0);
					JS_DefineFunction		(mp_context, mp_jsGlobals, "println",	jsPrintln, 	2, 0);
					JS_DefineFunction		(mp_context, mp_jsGlobals, "include",	jsInclude, 	1, 0);
				}
				else
					err = err_creating_globalObj;
		}
		else
			err = err_creating_context;
	}
	else
		err = err_creating_runtime;

	// ok everything went cool
	if (err == 0)
	{
		// Error handler
		defineErrorHandler(jsPrintError);

		// Garbage collector
		JS_SetBranchCallback(getContext(), branchCallback);
		JS_ToggleOptions(getContext(),JSOPTION_NATIVE_BRANCH_CALLBACK);

		// Define some oFJS classes & also some oF globals property
		initializeProperties();
		initializeClasses();
	}

	return err;
}

//--------------------------------------------------------------
void ofxJavascript::finalize()						
{
	// Release Context
	if (mp_context)
	{
		JS_DestroyContext(mp_context);
		mp_context = 0;
	}

	// Release Runtime
	if (mp_runtime)
	{
		JS_DestroyRuntime(mp_runtime);
		mp_runtime = 0;
	}

	// Shut down Javascript
	// Not sure we need to de-allocate ourselves classes managed by jsgen...
//	finalizeClasses();
	JS_ShutDown();

	// Destroy itself
	if (smp_instance)
	{
		delete 	smp_instance;
	}
}

//--------------------------------------------------------------
void ofxJavascript::defineErrorHandler(JSErrorReporter func)
{
	if (mp_context)
		JS_SetErrorReporter(mp_context, func);
}


//--------------------------------------------------------------
void ofxJavascript::initializeProperties()
{
}

//--------------------------------------------------------------
void ofxJavascript::initializeClasses()
{
	// Initialize our classes
	ofxJSGlobalFunc::initialize();
	ofxJSTrueTypeFont::initialize();
	ofxJSImage::initialize();
	ofxJSOpenGL::initialize();
	ofxJSNode::initialize();
	ofxJSLight::initialize();
	ofxJSVideoPlayer::initialize();
	ofxJSVideoGrabber::initialize();
	ofxJSOscReceiver::initialize();
	ofxJSOscMessage::initialize();
}

//--------------------------------------------------------------
void ofxJavascript::finalizeClasses()
{
	ofxJSGlobalFunc::finalize();
	ofxJSOpenGL::finalize();
}

//--------------------------------------------------------------
ofxJSScript* ofxJavascript::loadScript(string pathAbsolute, string strScriptName)
{
	ofxJSScript* pNewScript = new ofxJSScript(strScriptName);
	if (false == pNewScript->load(pathAbsolute))
	{
		delete 	pNewScript;
		pNewScript = 0;	
	}
	return pNewScript;
}

//--------------------------------------------------------------
ofxJSScript* ofxJavascript::loadScriptFromData(string pathRelative, string strScriptName)
{
	ofxJSScript* pNewScript = new ofxJSScript(strScriptName);
	if (false == pNewScript->loadFromData(pathRelative))
	{
		delete 	pNewScript;
		pNewScript = 0;	
	}
	return pNewScript;
}

//--------------------------------------------------------------
bool ofxJavascript::evalScript(ofxJSScript* pScript)
{
	if (pScript)
		return evalScript(pScript->m_content, pScript->m_id);
	return false;
}

bool ofxJavascript::evalScript(string& strScript,string strScriptName)
{
	jsval rval;
	uintN lineno=0;
	return JS_EvaluateScript(getContext(), getGlobalObj() , strScript.c_str(), (uintN)strScript.length(), strScriptName.c_str(), lineno, &rval) == JS_TRUE;
}

//--------------------------------------------------------------
bool ofxJavascript::evalScriptOnObject(string& idScript, string& strScript, JSObject* pJSObj)
{
	if (pJSObj)
	{
		jsval rval;uintN lineno=0;
		return (JS_EvaluateScript(getContext(), pJSObj, strScript.c_str(), (uintN)strScript.length(), idScript.c_str(), lineno, &rval) == JS_TRUE);
	}
	return false;
}

bool ofxJavascript::evalScriptOnObject(ofxJSScript* pScript, JSObject* pJSObj)
{
	if (pScript)
		return evalScriptOnObject(pScript->m_id, pScript->m_content, pJSObj);
	return false;
}

//--------------------------------------------------------------
JSBool ofxJavascript::jsPrint(JSContext* cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) 
{
    uintN i;
    JSString *str;

	for (i = 0; i < argc; i++) 
	{
		str = JS_ValueToString(cx, argv[i]);
		if (!str) return JS_FALSE;
		log(JS_GetStringBytes(str));
    }
    
    return JS_TRUE;
}

//--------------------------------------------------------------
JSBool ofxJavascript::jsPrintln(JSContext* cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) 
{
    uintN i;
    JSString *str;

	for (i = 0; i < argc; i++) 
	{
		str = JS_ValueToString(cx, argv[i]);
		if (!str) return JS_FALSE;
		string s = JS_GetStringBytes(str); 
		s+="\n";
		log(s);
    }
    
    return JS_TRUE;
}

// --------------------------------------------------------
JSBool ofxJavascript::jsInclude(JSContext* cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
	if (argc == 1 )
	{
		JSString *str = JS_ValueToString(cx, argv[0]);
		if (!str)
			return JS_FALSE;
		string includeFile = JS_GetStringBytes(str);
		string includeFileContent;
		if (ofxJSUtils::readFileIntoString(ofToDataPath(includeFile,true), includeFileContent))
		{
			if (!ofxJSEval(includeFileContent))
			{
				log("- error evaluated \"%s\"\n", includeFile.c_str());
			}
			else
			{
				log("- include \"%s\"\n", includeFile.c_str());
				return JS_TRUE;
			}
		}
		else
		{
			log("- error included \"%s\"\n", includeFile.c_str());
		}
	}
	
	return JS_FALSE;
}

// --------------------------------------------------------
// jsPrintError()
//
// http://egachine.berlios.de/embedding-sm-best-practice/embedding-sm-best-practice.html#id2510721
// http://developer.mozilla.org/en/docs/JSErrorReport
// --------------------------------------------------------
void ofxJavascript::jsPrintError(JSContext *cx, const char *message, JSErrorReport *report)
{
	if (report)
	{
		std::string jsError = message;
		jsError += " / line:";
		jsError += ofToString((int)report->lineno);
		if (report->filename)
		{
			jsError += " / script:";
			jsError += report->filename;
		
		}
		jsError += "\n";
		log(jsError);
	}
}

//--------------------------------------------------------------
JSBool ofxJavascript::branchCallback(JSContext *cx, JSScript *script)
{
	if ((++sm_branchCount & (0x1000-1)) == 1) // true every 4096
		JS_MaybeGC(cx);
	return JS_TRUE;
}

//--------------------------------------------------------------
void ofxJavascript::setPrintCallback(void* pUserData, jsPrintCallBack cb)
{
	mp_userData			= pUserData;
	mp_printCallback	= cb;
}

//--------------------------------------------------------------
void ofxJavascript::defaultPrintCallback(void* pUserData, const std::string& message)
{
	std::cout << message;
}

//--------------------------------------------------------------
void ofxJavascript::log(const std::string& message)
{
	if (mp_printCallback && mp_userData)
		(*mp_printCallback)(mp_userData,message);
}

void ofxJavascript::log(const char* format, ...)
{
	if (mp_printCallback && mp_userData)
	{
		char buffer[512];
		memset(buffer,0,512*sizeof(char));
	
		va_list args;
		va_start( args, format );
		vsprintf( buffer, format, args );

		
		string s = buffer;
		log(s);
	}
}


//--------------------------------------------------------------
int ofxJSInitialize()
{
	int err=0;
	if (ofxJavascript::smp_instance == 0)
	{
		// Instance of the ofxJavascript object
		ofxJavascript::smp_instance = new ofxJavascript();
		err = ofxJavascript::smp_instance->initialize();

		// We'll use data path (absolute path for loading scripts)
		if (err == 0)
			ofEnableDataPath();
	}
	else
		err = ofxJavascript::err_already_instanciated;
	return err;
}

//--------------------------------------------------------------
void ofxJSFinalize()
{
	if (ofxJavascript::smp_instance)
		ofxJavascript::smp_instance->finalize();
}

//--------------------------------------------------------------
bool ofxJSEval(string& strScript)
{
	if (ofxJavascript::smp_instance)
		return ofxJavascript::smp_instance->evalScript(strScript);
	return false;
}

bool ofxJSEval(ofxJSScript* pScript)
{
	if (ofxJavascript::smp_instance)
		return ofxJavascript::smp_instance->evalScript(pScript);
	return false;
}

//--------------------------------------------------------------
bool ofxJSEvalOnObject(string& idScript, string& strScript, JSObject* pObj)
{
	if (ofxJavascript::smp_instance)
		return ofxJavascript::smp_instance->evalScriptOnObject(idScript, strScript, pObj);
	return false;
}

bool ofxJSEvalOnObject(ofxJSScript* pScript, JSObject* pObj)
{
	if (ofxJavascript::smp_instance)
		return ofxJavascript::smp_instance->evalScriptOnObject(pScript, pObj);
	return false;
}

//--------------------------------------------------------------
ofxJSScript* ofxJSLoad(string pathAbsolute, string strName)
{
	if (ofxJavascript::smp_instance)
		return ofxJavascript::smp_instance->loadScript(pathAbsolute, strName);
	return 0;
}

//--------------------------------------------------------------
ofxJSScript* ofxJSLoadFromData(string pathRelative, string strName)
{
	if (ofxJavascript::smp_instance)
		return ofxJavascript::smp_instance->loadScriptFromData(pathRelative, strName);
	return 0;
}

//--------------------------------------------------------------
void ofxJSPrintCallback(void* pUserData, ofxJavascript::jsPrintCallBack cb)
{
	if (ofxJavascript::smp_instance)
		ofxJavascript::smp_instance->setPrintCallback(pUserData, cb);
}

//--------------------------------------------------------------
JSContext* ofxJSGetContext()
{
	if (ofxJavascript::smp_instance)
		return ofxJavascript::smp_instance->getContext();
	return 0;
}

//--------------------------------------------------------------
JSObject* ofxJSGetGlobalObj()
{
	if (ofxJavascript::smp_instance)
		return ofxJavascript::smp_instance->getGlobalObj();
	return 0;
}


