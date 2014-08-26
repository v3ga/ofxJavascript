// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSVideoGrabber.h"


///// JavaScript Class Definition
JSClass ofxJSVideoGrabber::_jsClass = {
	"ofxJSVideoGrabber", JSCLASS_HAS_PRIVATE,
	JS_PropertyStub, JS_PropertyStub,
	ofxJSVideoGrabber::JSGetProperty, ofxJSVideoGrabber::JSSetProperty,
	JS_EnumerateStub, JS_ResolveStub,
	JS_ConvertStub, ofxJSVideoGrabber::JSDestructor,
	0, 0, 0, 0, 
	0, 0, 0, 0
};

///// JavaScript Initialization Method
JSObject *ofxJSVideoGrabber::JSInit(JSContext *cx, JSObject *obj) {
	if (obj==NULL)
		obj = JS_GetGlobalObject(cx);
	jsval oldobj;
	if (JS_TRUE == JS_LookupProperty(cx, obj, ofxJSVideoGrabber::_jsClass.name, &oldobj) && JSVAL_IS_OBJECT(oldobj))
		return JSVAL_TO_OBJECT(oldobj);
	return JS_InitClass(cx, obj, NULL, &ofxJSVideoGrabber::_jsClass,
    	                                 ofxJSVideoGrabber::JSConstructor, 0,
    	                                 ofxJSVideoGrabber::_JSPropertySpec, ofxJSVideoGrabber::_JSFunctionSpec,
    	                                 NULL, NULL);
}

///// JavaScript Constructor
JSBool ofxJSVideoGrabber::JSConstructor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoGrabber *p = NULL;
	if (argc == 0) {
		/* Constructor: ofxJSVideoGrabber		() */
			p = new ofxJSVideoGrabber;
	}


	if (!p || !JS_SetPrivate(cx, obj, p)) return JS_FALSE;
	p->_JSinternal.o = obj;
	*rval = OBJECT_TO_JSVAL(obj);
	return JS_TRUE;
}

///// JavaScript Destructor
void ofxJSVideoGrabber::JSDestructor(JSContext *cx, JSObject *obj) {
	ofxJSVideoGrabber *p = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
	if (p) delete p;
}

///// JavaScript Object Linking
JSObject *ofxJSVideoGrabber::getJSObject(JSContext *cx) {
	if (!cx) return NULL;
	if (!_JSinternal.o) {
		_JSinternal.o = newJSObject(cx);
		if (!JS_SetPrivate(cx, _JSinternal.o, this)) return NULL;
	}
	return _JSinternal.o;
}

JSObject *ofxJSVideoGrabber::newJSObject(JSContext *cx) {
	return JS_NewObject(cx, &ofxJSVideoGrabber::_jsClass, NULL, NULL);
}

///// JavaScript Variable Table
JSPropertySpec ofxJSVideoGrabber::_JSPropertySpec[] = {
	{ "width", JSVAR_width, JSPROP_ENUMERATE, 0, 0},
	{ "height", JSVAR_height, JSPROP_ENUMERATE, 0, 0},
	{ 0, 0, 0, 0, 0 }
};

///// JavaScript Get Property Wrapper
JSBool ofxJSVideoGrabber::JSGetProperty(JSContext *cx, JSObject *obj, jsval id, jsval *vp) {
	if (JSVAL_IS_INT(id)) {
		ofxJSVideoGrabber *priv;
		switch(JSVAL_TO_INT(id)) {
			case JSVAR_width:
				priv = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
				if (priv==NULL)
					*vp = JSVAL_NULL;
				else
					*vp = __int_TO_JSVal(cx,priv->getWidth());
				break;

			case JSVAR_height:
				priv = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
				if (priv==NULL)
					*vp = JSVAL_NULL;
				else
					*vp = __int_TO_JSVal(cx,priv->getHeight());
				break;

		}
	}
	return JS_TRUE;
}

///// JavaScript Set Property Wrapper
JSBool ofxJSVideoGrabber::JSSetProperty(JSContext *cx, JSObject *obj, jsval id, jsval *vp) {
	if (JSVAL_IS_INT(id)) {
		ofxJSVideoGrabber *priv;
		switch(JSVAL_TO_INT(id)) {
			case JSVAR_width:
				priv = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
				if (priv!=NULL)
					priv->setWidth(__JSVal_TO_int(*vp));
				break;

			case JSVAR_height:
				priv = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
				if (priv!=NULL)
					priv->setHeight(__JSVal_TO_int(*vp));
				break;

		}
	}
	return JS_TRUE;
}

///// JavaScript Function Table
JSFunctionSpec ofxJSVideoGrabber::_JSFunctionSpec[] = {
	{ "close", JSFUNC_close, 0, 0, 0 },
	{ "draw", JSFUNC_draw, 2, 0, 0 },
		{ "initGrabber", JSFUNC_initGrabber, 2, 0, 0 },
	{ "isFrameNew", JSFUNC_isFrameNew, 0, 0, 0 },
			
	{ "setAnchorPoint", JSFUNC_setAnchorPoint, 2, 0, 0 },
	
	{ "setUseTexture", JSFUNC_setUseTexture, 1, 0, 0 },
	{ "setVerbose", JSFUNC_setVerbose, 1, 0, 0 },
	{ "update", JSFUNC_update, 0, 0, 0 },
	{ "videoSettings", JSFUNC_videoSettings, 0, 0, 0 },
	{ 0, 0, 0, 0, 0 }
};

///// JavaScript Function Wrappers
JSBool ofxJSVideoGrabber::JSFUNC_close(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoGrabber *p = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void			close() */
			p->close();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoGrabber::JSFUNC_draw(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoGrabber *p = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void 			draw(float x, float y) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->draw(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1])
			);
			return JS_TRUE;
		}
	}
	if (argc == 4) {
		/* Function: void 			draw(float x, float y, float w, float h) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3])) {
			p->draw(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2]),
				__JSVal_TO_float(argv[3])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}



JSBool ofxJSVideoGrabber::JSFUNC_initGrabber(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoGrabber *p = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 3) {
		/* Function: bool			initGrabber(int w, int h, bool bTexture = true) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			*rval = __bool_TO_JSVal(cx,p->initGrabber(
				__JSVal_TO_int(argv[0]),
				__JSVal_TO_int(argv[1])
				
			));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSVideoGrabber::JSFUNC_isFrameNew(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoGrabber *p = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: bool 			isFrameNew() */
			*rval = __bool_TO_JSVal(cx,p->isFrameNew());
			return JS_TRUE;
	}


	return JS_FALSE;
}



JSBool ofxJSVideoGrabber::JSFUNC_setAnchorPoint(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoGrabber *p = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void			setAnchorPoint(int x, int y) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->setAnchorPoint(
				__JSVal_TO_int(argv[0]),
				__JSVal_TO_int(argv[1])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSVideoGrabber::JSFUNC_setDeviceID(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoGrabber *p = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void			setDeviceID(int _deviceID) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->setDeviceID(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSVideoGrabber::JSFUNC_setUseTexture(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoGrabber *p = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 			setUseTexture(bool bUse) */
		if (JSVAL_IS_BOOLEAN(argv[0])) {
			p->setUseTexture(__JSVal_TO_bool(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSVideoGrabber::JSFUNC_setVerbose(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoGrabber *p = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 			setVerbose(bool bTalkToMe) */
		if (JSVAL_IS_BOOLEAN(argv[0])) {
			p->setVerbose(__JSVal_TO_bool(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSVideoGrabber::JSFUNC_update(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoGrabber *p = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void			update() */
			p->update();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoGrabber::JSFUNC_videoSettings(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoGrabber *p = (ofxJSVideoGrabber*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void			videoSettings() */
			p->videoSettings();
			return JS_TRUE;
	}


	return JS_FALSE;
}


