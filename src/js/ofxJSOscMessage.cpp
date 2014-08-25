// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSOscMessage.h"


///// JavaScript Class Definition
JSClass ofxJSOscMessage::_jsClass = {
	"ofxJSOscMessage", JSCLASS_HAS_PRIVATE,
	JS_PropertyStub, JS_PropertyStub,
	JS_PropertyStub, JS_PropertyStub,
	JS_EnumerateStub, JS_ResolveStub,
	JS_ConvertStub, ofxJSOscMessage::JSDestructor,
	0, 0, 0, 0, 
	0, 0, 0, 0
};

///// JavaScript Initialization Method
JSObject *ofxJSOscMessage::JSInit(JSContext *cx, JSObject *obj) {
	if (obj==NULL)
		obj = JS_GetGlobalObject(cx);
	jsval oldobj;
	if (JS_TRUE == JS_LookupProperty(cx, obj, ofxJSOscMessage::_jsClass.name, &oldobj) && JSVAL_IS_OBJECT(oldobj))
		return JSVAL_TO_OBJECT(oldobj);
	return JS_InitClass(cx, obj, NULL, &ofxJSOscMessage::_jsClass,
    	                                 NULL, 0,
    	                                 NULL, ofxJSOscMessage::_JSFunctionSpec,
    	                                 NULL, NULL);
}

///// JavaScript Destructor
void ofxJSOscMessage::JSDestructor(JSContext *cx, JSObject *obj) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (p) delete p;
}

///// JavaScript Object Linking
JSObject *ofxJSOscMessage::getJSObject(JSContext *cx) {
	if (!cx) return NULL;
	if (!_JSinternal.o) {
		_JSinternal.o = newJSObject(cx);
		if (!JS_SetPrivate(cx, _JSinternal.o, this)) return NULL;
	}
	return _JSinternal.o;
}

JSObject *ofxJSOscMessage::newJSObject(JSContext *cx) {
	return JS_NewObject(cx, &ofxJSOscMessage::_jsClass, NULL, NULL);
}

///// JavaScript Function Table
JSFunctionSpec ofxJSOscMessage::_JSFunctionSpec[] = {
	{ "addFloatArg", JSFUNC_addFloatArg, 1, 0, 0 },
	{ "addIntArg", JSFUNC_addIntArg, 1, 0, 0 },
	{ "addStringArg", JSFUNC_addStringArg, 1, 0, 0 },
	{ "clear", JSFUNC_clear, 0, 0, 0 },
	{ "getAddress", JSFUNC_getAddress, 0, 0, 0 },
	{ "getArgAsFloat", JSFUNC_getArgAsFloat, 1, 0, 0 },
	{ "getArgAsInt", JSFUNC_getArgAsInt, 1, 0, 0 },
	{ "getArgAsString", JSFUNC_getArgAsString, 1, 0, 0 },
	{ "getArgType", JSFUNC_getArgType, 1, 0, 0 },
	{ "getArgTypeName", JSFUNC_getArgTypeName, 1, 0, 0 },
	{ "getNumArgs", JSFUNC_getNumArgs, 0, 0, 0 },
	{ "getRemoteIp", JSFUNC_getRemoteIp, 0, 0, 0 },
	{ "getRemotePort", JSFUNC_getRemotePort, 0, 0, 0 },
	{ "setAddress", JSFUNC_setAddress, 1, 0, 0 },
	{ "setRemoteEndpoint", JSFUNC_setRemoteEndpoint, 2, 0, 0 },
	{ 0, 0, 0, 0, 0 }
};

///// JavaScript Function Wrappers
JSBool ofxJSOscMessage::JSFUNC_addFloatArg(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void addFloatArg(float argument) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->addFloatArg(__JSVal_TO_float(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_addIntArg(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void addIntArg(int argument) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->addIntArg(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_addStringArg(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void addStringArg(string argument) */
		if (JSVAL_IS_STRING(argv[0])) {
			p->addStringArg(__JSVal_TO_string(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_clear(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void clear() */
			p->clear();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_getAddress(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: string getAddress() */
			*rval = __string_TO_JSVal(cx,p->getAddress());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_getArgAsFloat(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: float getArgAsFloat(int index) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			*rval = __float_TO_JSVal(cx,p->getArgAsFloat(__JSVal_TO_int(argv[0])));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_getArgAsInt(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: int getArgAsInt(int index) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			*rval = __int_TO_JSVal(cx,p->getArgAsInt(__JSVal_TO_int(argv[0])));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_getArgAsString(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: string getArgAsString(int index) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			*rval = __string_TO_JSVal(cx,p->getArgAsString(__JSVal_TO_int(argv[0])));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_getArgType(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: int getArgType(int index) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			*rval = __int_TO_JSVal(cx,p->getArgType(__JSVal_TO_int(argv[0])));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_getArgTypeName(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: string getArgTypeName(int index) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			*rval = __string_TO_JSVal(cx,p->getArgTypeName(__JSVal_TO_int(argv[0])));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_getNumArgs(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int getNumArgs() */
			*rval = __int_TO_JSVal(cx,p->getNumArgs());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_getRemoteIp(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: string getRemoteIp() */
			*rval = __string_TO_JSVal(cx,p->getRemoteIp());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_getRemotePort(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int getRemotePort() */
			*rval = __int_TO_JSVal(cx,p->getRemotePort());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_setAddress(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void setAddress(string _address) */
		if (JSVAL_IS_STRING(argv[0])) {
			p->setAddress(__JSVal_TO_string(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOscMessage::JSFUNC_setRemoteEndpoint(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOscMessage *p = (ofxJSOscMessage*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void setRemoteEndpoint(string host,int port) */
		if (JSVAL_IS_STRING(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->setRemoteEndpoint(
				__JSVal_TO_string(argv[0]),
				__JSVal_TO_int(argv[1])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}


