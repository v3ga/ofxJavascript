// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSOpenGL.h"


///// JavaScript Class Definition
JSClass ofxJSOpenGL::_jsClass = {
	"ofxJSOpenGL", JSCLASS_HAS_PRIVATE,
	JS_PropertyStub, JS_PropertyStub,
	JS_PropertyStub, JS_PropertyStub,
	JS_EnumerateStub, JS_ResolveStub,
	JS_ConvertStub, ofxJSOpenGL::JSDestructor,
	0, 0, 0, 0, 
	0, 0, 0, 0
};

///// JavaScript Initialization Method
JSObject *ofxJSOpenGL::JSInit(JSContext *cx, JSObject *obj) {
	if (obj==NULL)
		obj = JS_GetGlobalObject(cx);
	jsval oldobj;
	if (JS_TRUE == JS_LookupProperty(cx, obj, ofxJSOpenGL::_jsClass.name, &oldobj) && JSVAL_IS_OBJECT(oldobj))
		return JSVAL_TO_OBJECT(oldobj);
	return JS_InitClass(cx, obj, NULL, &ofxJSOpenGL::_jsClass,
    	                                 NULL, 0,
    	                                 NULL, ofxJSOpenGL::_JSFunctionSpec,
    	                                 NULL, NULL);
}

///// JavaScript Destructor
void ofxJSOpenGL::JSDestructor(JSContext *cx, JSObject *obj) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (p) delete p;
}

///// JavaScript Object Linking
JSObject *ofxJSOpenGL::getJSObject(JSContext *cx) {
	if (!cx) return NULL;
	if (!_JSinternal.o) {
		_JSinternal.o = newJSObject(cx);
		if (!JS_SetPrivate(cx, _JSinternal.o, this)) return NULL;
	}
	return _JSinternal.o;
}

JSObject *ofxJSOpenGL::newJSObject(JSContext *cx) {
	return JS_NewObject(cx, &ofxJSOpenGL::_jsClass, NULL, NULL);
}

///// JavaScript Function Table
JSFunctionSpec ofxJSOpenGL::_JSFunctionSpec[] = {
	{ "Begin", JSFUNC_Begin, 1, 0, 0 },
	{ "BindTexture", JSFUNC_BindTexture, 2, 0, 0 },
	{ "BlendFunc", JSFUNC_BlendFunc, 2, 0, 0 },
	{ "Color3", JSFUNC_Color3, 3, 0, 0 },
	{ "Color4", JSFUNC_Color4, 4, 0, 0 },
	{ "Disable", JSFUNC_Disable, 1, 0, 0 },
	{ "Enable", JSFUNC_Enable, 1, 0, 0 },
	{ "End", JSFUNC_End, 0, 0, 0 },
	{ "LoadIdentity", JSFUNC_LoadIdentity, 0, 0, 0 },
	{ "PopMatrix", JSFUNC_PopMatrix, 0, 0, 0 },
	{ "PushMatrix", JSFUNC_PushMatrix, 0, 0, 0 },
	{ "Rotate", JSFUNC_Rotate, 4, 0, 0 },
	{ "Scale", JSFUNC_Scale, 3, 0, 0 },
	{ "TexCoord2", JSFUNC_TexCoord2, 2, 0, 0 },
	{ "Translate", JSFUNC_Translate, 3, 0, 0 },
	{ "Vertex2", JSFUNC_Vertex2, 2, 0, 0 },
	{ "Vertex3", JSFUNC_Vertex3, 3, 0, 0 },
	{ 0, 0, 0, 0, 0 }
};

///// JavaScript Function Wrappers
JSBool ofxJSOpenGL::JSFUNC_Begin(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void					Begin(int mode) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->Begin(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_BindTexture(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void					BindTexture(int mode, int texName) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->BindTexture(
				__JSVal_TO_int(argv[0]),
				__JSVal_TO_int(argv[1])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_BlendFunc(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void					BlendFunc(int src, int dst) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->BlendFunc(
				__JSVal_TO_int(argv[0]),
				__JSVal_TO_int(argv[1])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_Color3(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void					Color3(float r, float g, float b) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			p->Color3(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_Color4(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc < 4) return JS_FALSE;
	if (argc == 4) {
		/* Function: void					Color4(float r, float g, float b, float a) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3])) {
			p->Color4(
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

JSBool ofxJSOpenGL::JSFUNC_Disable(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void					Disable(int mode) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->Disable(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_Enable(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void					Enable(int mode) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->Enable(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_End(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void					End() */
			p->End();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_LoadIdentity(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void					LoadIdentity() */
			p->LoadIdentity();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_PopMatrix(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void					PopMatrix() */
			p->PopMatrix();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_PushMatrix(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void					PushMatrix() */
			p->PushMatrix();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_Rotate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc < 4) return JS_FALSE;
	if (argc == 4) {
		/* Function: void					Rotate(float angle,float xAxis,float yAxis,float zAxis) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3])) {
			p->Rotate(
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

JSBool ofxJSOpenGL::JSFUNC_Scale(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void					Scale(float x,float y,float z) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			p->Scale(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_TexCoord2(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void					TexCoord2(float u, float v) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->TexCoord2(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_Translate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void					Translate(float x,float y,float z) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			p->Translate(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_Vertex2(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void					Vertex2(float x, float y) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->Vertex2(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSOpenGL::JSFUNC_Vertex3(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSOpenGL *p = (ofxJSOpenGL*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void					Vertex3(float x, float y, float z) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			p->Vertex3(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}


