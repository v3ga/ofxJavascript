#ifndef OFX_JAVASCRIPT_H
#define OFX_JAVASCRIPT_H

#include "ofMain.h"
#include "ofxJSUtils.h"

#ifdef TARGET_OSX
	#define XP_UNIX
#endif
#include "jsapi.h"

// oFClasses
#include "ofxJSScript.h"
#include "ofxJSGlobalFunc.h"
#include "ofxJSTrueTypeFont.h"
#include "ofxJSImage.h"
#include "ofxJSOpenGL.h"
#include "ofxJSNode.h"
#include "ofxJSLight.h"
#include "ofxJSVideoPlayer.h"
#include "ofxJSVideoGrabber.h"
#ifdef OFX_JS_OSC
#include "ofxJSOscMessage.h"
#include "ofxJSOscReceiver.h"
#endif
#include "ofxJSSoundPlayer.h"

class ofxJavascript
{
	public:
		ofxJavascript();
		~ofxJavascript();

		// Errors
		enum
		{
			err_creating_runtime	= 1,
			err_creating_context	= 2,
			err_creating_globalObj	= 3,
			err_already_instanciated= 4
		};

		// Singleton (allow only one instance per application)
		static ofxJavascript*		smp_instance;

		// Version
		JSVersion					m_version;		

		// Runtime + context
		JSRuntime*					mp_runtime;
		JSContext*					mp_context;
		
		// Global object class
		static JSClass				sm_globalClass;
		JSObject*					getGlobalObj(){return mp_jsGlobals;};
		
		// Global Object
		JSObject*					mp_jsGlobals;
		JSContext*					getContext(){return mp_context;};

		// Begin / end function
		virtual int					initialize();						
		virtual void				finalize();

		// Classes + Properties
		virtual	void				initializeClasses				();
		virtual	void				finalizeClasses					();

		virtual	void				initializeProperties			();

		// API
		virtual ofxJSScript*		loadScript				(string pathAbsolute, string strScriptName);
		virtual ofxJSScript*		loadScriptFromData		(string pathRelative, string strScriptName);
		virtual bool				evalScript				(ofxJSScript*);
		virtual bool				evalScript				(string& strScript, string strScriptName="anonymousScript");
		virtual bool				evalScriptOnObject		(string& idScript, string& strScript, JSObject*);
		virtual bool				evalScriptOnObject		(ofxJSScript*, JSObject*);

		// Error handlers
		string						m_strLastError;
		void						defineErrorHandler		(JSErrorReporter);

		// print function called from javascript
		static JSBool				jsPrint					(JSContext* cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);
		static JSBool				jsPrintln				(JSContext* cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

		// Callback for print
		typedef void(*jsPrintCallBack)(void*, const std::string& message);
		static jsPrintCallBack		mp_printCallback;
		static void*				mp_userData;

		static void					defaultPrintCallback	(void* pUserData, const std::string&);
		void						setPrintCallback		(void* pUserData, jsPrintCallBack cb);
		static void					log						(const std::string&);
		static void					log						(const char* format, ...);


		// include function called from javascript
		static JSBool				jsInclude				(JSContext* cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

		// print error function, called by spidermonkey, enabled by default
		static void					jsPrintError			(JSContext *cx, const char *message, JSErrorReport *report);

	private:
		static	uint32				sm_branchCount;
		static	JSBool				branchCallback			(JSContext *cx, JSScript *script);
};

//--------------------------------------------------------------
int				ofxJSInitialize		();
void			ofxJSFinalize		();
bool			ofxJSEval			(string& strScript);
bool			ofxJSEval			(ofxJSScript*);
bool			ofxJSEvalOnObject	(string& idScript, string& strScript, JSObject*);
bool			ofxJSEvalOnObject	(ofxJSScript*,		JSObject*);
ofxJSScript*	ofxJSLoad			(string pathAbsolute, string strName);
ofxJSScript*	ofxJSLoadFromData	(string pathRelative, string strName);
void			ofxJSPrintCallback	(void*, ofxJavascript::jsPrintCallBack);

JSContext*		ofxJSGetContext		();
JSObject*		ofxJSGetGlobalObj	();

#endif
