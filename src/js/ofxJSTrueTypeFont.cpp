// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSTrueTypeFont.h"


///// JavaScript Class Definition
JSClass ofxJSTrueTypeFont::_jsClass = {
	"ofxJSTrueTypeFont", JSCLASS_HAS_PRIVATE,
	JS_PropertyStub, JS_PropertyStub,
	JS_PropertyStub, JS_PropertyStub,
	JS_EnumerateStub, JS_ResolveStub,
	JS_ConvertStub, ofxJSTrueTypeFont::JSDestructor,
	0, 0, 0, 0, 
	0, 0, 0, 0
};

///// JavaScript Initialization Method
JSObject *ofxJSTrueTypeFont::JSInit(JSContext *cx, JSObject *obj) {
	if (obj==NULL)
		obj = JS_GetGlobalObject(cx);
	jsval oldobj;
	if (JS_TRUE == JS_LookupProperty(cx, obj, ofxJSTrueTypeFont::_jsClass.name, &oldobj) && JSVAL_IS_OBJECT(oldobj))
		return JSVAL_TO_OBJECT(oldobj);
	return JS_InitClass(cx, obj, NULL, &ofxJSTrueTypeFont::_jsClass,
    	                                 ofxJSTrueTypeFont::JSConstructor, 0,
    	                                 NULL, ofxJSTrueTypeFont::_JSFunctionSpec,
    	                                 NULL, NULL);
}

///// JavaScript Constructor
JSBool ofxJSTrueTypeFont::JSConstructor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSTrueTypeFont *p = NULL;
	if (argc == 0) {
		/* Constructor: ofxJSTrueTypeFont		(){} */
			p = new ofxJSTrueTypeFont;
	}


	if (!p || !JS_SetPrivate(cx, obj, p)) return JS_FALSE;
	p->_JSinternal.o = obj;
	*rval = OBJECT_TO_JSVAL(obj);
	return JS_TRUE;
}

///// JavaScript Destructor
void ofxJSTrueTypeFont::JSDestructor(JSContext *cx, JSObject *obj) {
	ofxJSTrueTypeFont *p = (ofxJSTrueTypeFont*)JS_GetPrivate(cx, obj);
	if (p) delete p;
}

///// JavaScript Object Linking
JSObject *ofxJSTrueTypeFont::getJSObject(JSContext *cx) {
	if (!cx) return NULL;
	if (!_JSinternal.o) {
		_JSinternal.o = newJSObject(cx);
		if (!JS_SetPrivate(cx, _JSinternal.o, this)) return NULL;
	}
	return _JSinternal.o;
}

JSObject *ofxJSTrueTypeFont::newJSObject(JSContext *cx) {
	return JS_NewObject(cx, &ofxJSTrueTypeFont::_jsClass, NULL, NULL);
}

///// JavaScript Function Table
JSFunctionSpec ofxJSTrueTypeFont::_JSFunctionSpec[] = {
	{ "drawString", JSFUNC_drawString, 3, 0, 0 },
	{ "drawStringAsShapes", JSFUNC_drawStringAsShapes, 3, 0, 0 },
	{ "getLineHeight", JSFUNC_getLineHeight, 0, 0, 0 },
	{ "loadFont", JSFUNC_loadFont, 2, 0, 0 },
	{ "setLineHeight", JSFUNC_setLineHeight, 1, 0, 0 },
	{ "stringHeight", JSFUNC_stringHeight, 1, 0, 0 },
	{ "stringWidth", JSFUNC_stringWidth, 1, 0, 0 },
	{ 0, 0, 0, 0, 0 }
};

///// JavaScript Function Wrappers
JSBool ofxJSTrueTypeFont::JSFUNC_drawString(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSTrueTypeFont *p = (ofxJSTrueTypeFont*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void						drawString			(string s, float x, float y) */
		if (JSVAL_IS_STRING(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			p->drawString(
				__JSVal_TO_string(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSTrueTypeFont::JSFUNC_drawStringAsShapes(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSTrueTypeFont *p = (ofxJSTrueTypeFont*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void						drawStringAsShapes	(string s, float x, float y) */
		if (JSVAL_IS_STRING(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			p->drawStringAsShapes(
				__JSVal_TO_string(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSTrueTypeFont::JSFUNC_getLineHeight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSTrueTypeFont *p = (ofxJSTrueTypeFont*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float						getLineHeight		() */
			*rval = __float_TO_JSVal(cx,p->getLineHeight());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSTrueTypeFont::JSFUNC_loadFont(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSTrueTypeFont *p = (ofxJSTrueTypeFont*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void						loadFont			(string filename, int fontsize) */
		if (JSVAL_IS_STRING(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->loadFont(
				__JSVal_TO_string(argv[0]),
				__JSVal_TO_int(argv[1])
			);
			return JS_TRUE;
		}
	}
	if (argc == 5) {
		/* Function: void						loadFont			(string filename, int fontsize, bool _bAntiAliased, bool _bFullCharacterSet, bool makeContours) */
		if (JSVAL_IS_STRING(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_BOOLEAN(argv[2]) && JSVAL_IS_BOOLEAN(argv[3]) && JSVAL_IS_BOOLEAN(argv[4])) {
			p->loadFont(
				__JSVal_TO_string(argv[0]),
				__JSVal_TO_int(argv[1]),
				__JSVal_TO_bool(argv[2]),
				__JSVal_TO_bool(argv[3]),
				__JSVal_TO_bool(argv[4])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSTrueTypeFont::JSFUNC_setLineHeight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSTrueTypeFont *p = (ofxJSTrueTypeFont*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void						setLineHeight		(float height) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->setLineHeight(__JSVal_TO_float(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSTrueTypeFont::JSFUNC_stringHeight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSTrueTypeFont *p = (ofxJSTrueTypeFont*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: float						stringHeight		(string s) */
		if (JSVAL_IS_STRING(argv[0])) {
			*rval = __float_TO_JSVal(cx,p->stringHeight(__JSVal_TO_string(argv[0])));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSTrueTypeFont::JSFUNC_stringWidth(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSTrueTypeFont *p = (ofxJSTrueTypeFont*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: float						stringWidth			(string s) */
		if (JSVAL_IS_STRING(argv[0])) {
			*rval = __float_TO_JSVal(cx,p->stringWidth(__JSVal_TO_string(argv[0])));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}


