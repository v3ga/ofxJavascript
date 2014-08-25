// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSOscSender.h"


///// JavaScript Class Definition
JSClass ofxJSOscSender::_jsClass = {
	"ofxJSOscSender", JSCLASS_HAS_PRIVATE,
	JS_PropertyStub, JS_PropertyStub,
	JS_PropertyStub, JS_PropertyStub,
	JS_EnumerateStub, JS_ResolveStub,
	JS_ConvertStub, ofxJSOscSender::JSDestructor,
	0, 0, 0, 0, 
	0, 0, 0, 0
};

///// JavaScript Initialization Method
JSObject *ofxJSOscSender::JSInit(JSContext *cx, JSObject *obj) {
	if (obj==NULL)
		obj = JS_GetGlobalObject(cx);
	jsval oldobj;
	if (JS_TRUE == JS_LookupProperty(cx, obj, ofxJSOscSender::_jsClass.name, &oldobj) && JSVAL_IS_OBJECT(oldobj))
		return JSVAL_TO_OBJECT(oldobj);
	return JS_InitClass(cx, obj, NULL, &ofxJSOscSender::_jsClass,
    	                                 ofxJSOscSender::JSConstructor, 0,
    	                                 NULL, ofxJSOscSender::_JSFunctionSpec,
    	                                 NULL, NULL);
}

///// JavaScript Constructor
JSBool ofxJSOscSender::JSConstructor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscSender *p = NULL;
	if (argc == 0) {
		/* Constructor: ofxJSOscSender			() */
			p = new ofxJSOscSender;
	}


	if (!p || !JS_SetPrivate(cx, obj, p)) return JS_FALSE;
	p->_JSinternal.o = obj;
	*rval = OBJECT_TO_JSVAL(obj);
	return JS_TRUE;
}

///// JavaScript Destructor
void ofxJSOscSender::JSDestructor(JSContext *cx, JSObject *obj) {
	ofxJSOscSender *p = (ofxJSOscSender*)JS_GetPrivate(cx, obj);
	if (p) delete p;
}

///// JavaScript Object Linking
JSObject *ofxJSOscSender::getJSObject(JSContext *cx) {
	if (!cx) return NULL;
	if (!_JSinternal.o) {
		_JSinternal.o = newJSObject(cx);
		if (!JS_SetPrivate(cx, _JSinternal.o, this)) return NULL;
	}
	return _JSinternal.o;
}

JSObject *ofxJSOscSender::newJSObject(JSContext *cx) {
	return JS_NewObject(cx, &ofxJSOscSender::_jsClass, NULL, NULL);
}

///// JavaScript Function Table
JSFunctionSpec ofxJSOscSender::_JSFunctionSpec[] = {
	{ "sendMessage", JSFUNC_sendMessage, 0, 0, 0 },
	{ "setup", JSFUNC_setup, 2, 0, 0 },
	{ 0, 0, 0, 0, 0 }
};

///// JavaScript Function Wrappers
JSBool ofxJSOscSender::JSFUNC_sendMessage(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscSender *p = (ofxJSOscSender*)JS_GetPrivate(cx, obj);
	if (true) {
		/* Function: void sendMessage(uintN argc, jsval *argv) */
			p->sendMessage(
				argc,
				argv
			);
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSOscSender::JSFUNC_setup(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscSender *p = (ofxJSOscSender*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void setup(string hostname,int port) */
		if (JSVAL_IS_STRING(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->setup(
				__JSVal_TO_string(argv[0]),
				__JSVal_TO_int(argv[1])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}


