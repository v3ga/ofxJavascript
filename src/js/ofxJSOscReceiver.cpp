// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSOscReceiver.h"


///// JavaScript Class Definition
JSClass ofxJSOscReceiver::_jsClass = {
	"ofxJSOscReceiver", JSCLASS_HAS_PRIVATE,
	JS_PropertyStub, JS_PropertyStub,
	JS_PropertyStub, JS_PropertyStub,
	JS_EnumerateStub, JS_ResolveStub,
	JS_ConvertStub, ofxJSOscReceiver::JSDestructor,
	0, 0, 0, 0, 
	0, 0, 0, 0
};

///// JavaScript Initialization Method
JSObject *ofxJSOscReceiver::JSInit(JSContext *cx, JSObject *obj) {
	if (obj==NULL)
		obj = JS_GetGlobalObject(cx);
	jsval oldobj;
	if (JS_TRUE == JS_LookupProperty(cx, obj, ofxJSOscReceiver::_jsClass.name, &oldobj) && JSVAL_IS_OBJECT(oldobj))
		return JSVAL_TO_OBJECT(oldobj);
	return JS_InitClass(cx, obj, NULL, &ofxJSOscReceiver::_jsClass,
    	                                 ofxJSOscReceiver::JSConstructor, 0,
    	                                 NULL, ofxJSOscReceiver::_JSFunctionSpec,
    	                                 NULL, NULL);
}

///// JavaScript Constructor
JSBool ofxJSOscReceiver::JSConstructor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscReceiver *p = NULL;
	if (argc == 0) {
		/* Constructor: ofxJSOscReceiver			() */
			p = new ofxJSOscReceiver;
	}


	if (!p || !JS_SetPrivate(cx, obj, p)) return JS_FALSE;
	p->_JSinternal.o = obj;
	*rval = OBJECT_TO_JSVAL(obj);
	return JS_TRUE;
}

///// JavaScript Destructor
void ofxJSOscReceiver::JSDestructor(JSContext *cx, JSObject *obj) {
	ofxJSOscReceiver *p = (ofxJSOscReceiver*)JS_GetPrivate(cx, obj);
	if (p) delete p;
}

///// JavaScript Object Linking
JSObject *ofxJSOscReceiver::getJSObject(JSContext *cx) {
	if (!cx) return NULL;
	if (!_JSinternal.o) {
		_JSinternal.o = newJSObject(cx);
		if (!JS_SetPrivate(cx, _JSinternal.o, this)) return NULL;
	}
	return _JSinternal.o;
}

JSObject *ofxJSOscReceiver::newJSObject(JSContext *cx) {
	return JS_NewObject(cx, &ofxJSOscReceiver::_jsClass, NULL, NULL);
}

///// JavaScript Function Table
JSFunctionSpec ofxJSOscReceiver::_JSFunctionSpec[] = {
	{ "getNextMessage", JSFUNC_getNextMessage, 0, 0, 0 },
	{ "hasWaitingMessages", JSFUNC_hasWaitingMessages, 0, 0, 0 },
	{ "setup", JSFUNC_setup, 1, 0, 0 },
	{ 0, 0, 0, 0, 0 }
};

///// JavaScript Function Wrappers
JSBool ofxJSOscReceiver::JSFUNC_getNextMessage(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscReceiver *p = (ofxJSOscReceiver*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: JSBool getNextMessage(jsval* retval) */
			return (p->getNextMessage(rval));
	}


	return JS_FALSE;
}

JSBool ofxJSOscReceiver::JSFUNC_hasWaitingMessages(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscReceiver *p = (ofxJSOscReceiver*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: bool hasWaitingMessages() */
			*rval = __bool_TO_JSVal(cx,p->hasWaitingMessages());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSOscReceiver::JSFUNC_setup(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscReceiver *p = (ofxJSOscReceiver*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void setup(int listen_port) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->setup(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}


