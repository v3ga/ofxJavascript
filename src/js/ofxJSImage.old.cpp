// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSImage.h"


///// JavaScript Class Definition
JSClass ofxJSImage::_jsClass = {
	"ofxJSImage", JSCLASS_HAS_PRIVATE,
	JS_PropertyStub, JS_PropertyStub,
	ofxJSImage::JSGetProperty, ofxJSImage::JSSetProperty,
	JS_EnumerateStub, JS_ResolveStub,
	JS_ConvertStub, ofxJSImage::JSDestructor,
	0, 0, 0, 0, 
	0, 0, 0, 0
};

///// JavaScript Initialization Method
JSObject *ofxJSImage::JSInit(JSContext *cx, JSObject *obj) {
	if (obj==NULL)
		obj = JS_GetGlobalObject(cx);
	jsval oldobj;
	if (JS_TRUE == JS_LookupProperty(cx, obj, ofxJSImage::_jsClass.name, &oldobj) && JSVAL_IS_OBJECT(oldobj))
		return JSVAL_TO_OBJECT(oldobj);
	return JS_InitClass(cx, obj, NULL, &ofxJSImage::_jsClass,
    	                                 ofxJSImage::JSConstructor, 0,
    	                                 ofxJSImage::_JSPropertySpec, ofxJSImage::_JSFunctionSpec,
    	                                 NULL, NULL);
}

///// JavaScript Constructor
JSBool ofxJSImage::JSConstructor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSImage *p = NULL;
	if (argc == 0) {
		/* Constructor: ofxJSImage			() */
			p = new ofxJSImage;
	}


	if (!p || !JS_SetPrivate(cx, obj, p)) return JS_FALSE;
	p->_JSinternal.o = obj;
	*rval = OBJECT_TO_JSVAL(obj);
	return JS_TRUE;
}

///// JavaScript Destructor
void ofxJSImage::JSDestructor(JSContext *cx, JSObject *obj) {
	ofxJSImage *p = (ofxJSImage*)JS_GetPrivate(cx, obj);
	if (p) delete p;
}

///// JavaScript Object Linking
JSObject *ofxJSImage::getJSObject(JSContext *cx) {
	if (!cx) return NULL;
	if (!_JSinternal.o) {
		_JSinternal.o = newJSObject(cx);
		if (!JS_SetPrivate(cx, _JSinternal.o, this)) return NULL;
	}
	return _JSinternal.o;
}

JSObject *ofxJSImage::newJSObject(JSContext *cx) {
	return JS_NewObject(cx, &ofxJSImage::_jsClass, NULL, NULL);
}

///// JavaScript Variable Table
JSPropertySpec ofxJSImage::_JSPropertySpec[] = {
	{ "width", JSVAR_width, JSPROP_ENUMERATE, 0, 0},
	{ "height", JSVAR_height, JSPROP_ENUMERATE, 0, 0},
	{ "bpp", JSVAR_bpp, JSPROP_ENUMERATE, 0, 0},
	{ "type", JSVAR_type, JSPROP_ENUMERATE, 0, 0},
	{ 0, 0, 0, 0, 0 }
};

///// JavaScript Get Property Wrapper
JSBool ofxJSImage::JSGetProperty(JSContext *cx, JSObject *obj, jsval id, jsval *vp) {
	if (JSVAL_IS_INT(id)) {
		ofxJSImage *priv;
		switch(JSVAL_TO_INT(id)) {
			case JSVAR_width:
				priv = (ofxJSImage*)JS_GetPrivate(cx, obj);
				if (priv==NULL)
					*vp = JSVAL_NULL;
				else
					*vp = __int_TO_JSVal(cx,priv->getWidth());
				break;

			case JSVAR_height:
				priv = (ofxJSImage*)JS_GetPrivate(cx, obj);
				if (priv==NULL)
					*vp = JSVAL_NULL;
				else
					*vp = __int_TO_JSVal(cx,priv->getHeight());
				break;

			case JSVAR_bpp:
				priv = (ofxJSImage*)JS_GetPrivate(cx, obj);
				if (priv==NULL)
					*vp = JSVAL_NULL;
				else
					*vp = __int_TO_JSVal(cx,priv->getBpp());
				break;

			case JSVAR_type:
				priv = (ofxJSImage*)JS_GetPrivate(cx, obj);
				if (priv==NULL)
					*vp = JSVAL_NULL;
				else
					*vp = __int_TO_JSVal(cx,priv->getType());
				break;

		}
	}
	return JS_TRUE;
}

///// JavaScript Set Property Wrapper
JSBool ofxJSImage::JSSetProperty(JSContext *cx, JSObject *obj, jsval id, jsval *vp) {
	if (JSVAL_IS_INT(id)) {
		ofxJSImage *priv;
		switch(JSVAL_TO_INT(id)) {
			case JSVAR_width:
				priv = (ofxJSImage*)JS_GetPrivate(cx, obj);
				if (priv!=NULL)
					priv->setWidth(__JSVal_TO_int(*vp));
				break;

			case JSVAR_height:
				priv = (ofxJSImage*)JS_GetPrivate(cx, obj);
				if (priv!=NULL)
					priv->setHeight(__JSVal_TO_int(*vp));
				break;

			case JSVAR_bpp:
				priv = (ofxJSImage*)JS_GetPrivate(cx, obj);
				if (priv!=NULL)
					priv->setBpp(__JSVal_TO_int(*vp));
				break;

			case JSVAR_type:
				priv = (ofxJSImage*)JS_GetPrivate(cx, obj);
				if (priv!=NULL)
					priv->setType(__JSVal_TO_int(*vp));
				break;

		}
	}
	return JS_TRUE;
}

///// JavaScript Function Table
JSFunctionSpec ofxJSImage::_JSFunctionSpec[] = {
	{ "allocate", JSFUNC_allocate, 3, 0, 0 },
	{ "clear", JSFUNC_clear, 0, 0, 0 },
	{ "draw", JSFUNC_draw, 2, 0, 0 },
	{ "grabScreen", JSFUNC_grabScreen, 4, 0, 0 },
	{ "loadImage", JSFUNC_loadImage, 1, 0, 0 },
	{ "resetAnchor", JSFUNC_resetAnchor, 0, 0, 0 },
	{ "resize", JSFUNC_resize, 2, 0, 0 },
	{ "saveImage", JSFUNC_saveImage, 1, 0, 0 },
	{ "setAnchorPercent", JSFUNC_setAnchorPercent, 2, 0, 0 },
	{ "setAnchorPoint", JSFUNC_setAnchorPoint, 2, 0, 0 },
	{ "setImageType", JSFUNC_setImageType, 1, 0, 0 },
	{ "setUseTexture", JSFUNC_setUseTexture, 1, 0, 0 },
	{ 0, 0, 0, 0, 0 }
};

///// JavaScript Function Wrappers
JSBool ofxJSImage::JSFUNC_allocate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSImage *p = (ofxJSImage*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void 				allocate(int w, int h, int type) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			p->allocate(
				__JSVal_TO_int(argv[0]),
				__JSVal_TO_int(argv[1]),
				__JSVal_TO_int(argv[2])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSImage::JSFUNC_clear(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSImage *p = (ofxJSImage*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void 				clear() */
			p->clear();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSImage::JSFUNC_draw(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSImage *p = (ofxJSImage*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void 				draw(float x, float y) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->draw(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1])
			);
			return JS_TRUE;
		}
	}
	if (argc == 4) {
		/* Function: void 				draw(float x, float y, float w, float h) */
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

JSBool ofxJSImage::JSFUNC_grabScreen(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSImage *p = (ofxJSImage*)JS_GetPrivate(cx, obj);
	if (argc < 4) return JS_FALSE;
	if (argc == 4) {
		/* Function: void 				grabScreen(int x, int y, int w, int h) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3])) {
			p->grabScreen(
				__JSVal_TO_int(argv[0]),
				__JSVal_TO_int(argv[1]),
				__JSVal_TO_int(argv[2]),
				__JSVal_TO_int(argv[3])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSImage::JSFUNC_loadImage(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSImage *p = (ofxJSImage*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: bool 				loadImage(string fileName) */
		if (JSVAL_IS_STRING(argv[0])) {
			*rval = __bool_TO_JSVal(cx,p->loadImage(__JSVal_TO_string(argv[0])));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSImage::JSFUNC_resetAnchor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSImage *p = (ofxJSImage*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void				resetAnchor() */
			p->resetAnchor();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSImage::JSFUNC_resize(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSImage *p = (ofxJSImage*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void 				resize(int newWidth, int newHeight) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->resize(
				__JSVal_TO_int(argv[0]),
				__JSVal_TO_int(argv[1])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSImage::JSFUNC_saveImage(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSImage *p = (ofxJSImage*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 				saveImage(string fileName) */
		if (JSVAL_IS_STRING(argv[0])) {
			p->saveImage(__JSVal_TO_string(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSImage::JSFUNC_setAnchorPercent(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSImage *p = (ofxJSImage*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void				setAnchorPercent(float xPct, float yPct) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->setAnchorPercent(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSImage::JSFUNC_setAnchorPoint(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSImage *p = (ofxJSImage*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void				setAnchorPoint(int x, int y) */
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

JSBool ofxJSImage::JSFUNC_setImageType(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSImage *p = (ofxJSImage*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 				setImageType(int type) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->setImageType(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSImage::JSFUNC_setUseTexture(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSImage *p = (ofxJSImage*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 				setUseTexture(bool bUse) */
		if (JSVAL_IS_BOOLEAN(argv[0])) {
			p->setUseTexture(__JSVal_TO_bool(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}


