// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSGlobalFunc.h"


///// JavaScript Class Definition
JSClass ofxJSGlobalFunc::_jsClass = {
	"ofxJSGlobalFunc", JSCLASS_HAS_PRIVATE,
	JS_PropertyStub, JS_PropertyStub,
	JS_PropertyStub, JS_PropertyStub,
	JS_EnumerateStub, JS_ResolveStub,
	JS_ConvertStub, ofxJSGlobalFunc::JSDestructor,
	0, 0, 0, 0, 
	0, 0, 0, 0
};

///// JavaScript Initialization Method
JSObject *ofxJSGlobalFunc::JSInit(JSContext *cx, JSObject *obj) {
	if (obj==NULL)
		obj = JS_GetGlobalObject(cx);
	jsval oldobj;
	if (JS_TRUE == JS_LookupProperty(cx, obj, ofxJSGlobalFunc::_jsClass.name, &oldobj) && JSVAL_IS_OBJECT(oldobj))
		return JSVAL_TO_OBJECT(oldobj);
	return JS_InitClass(cx, obj, NULL, &ofxJSGlobalFunc::_jsClass,
    	                                 NULL, 0,
    	                                 NULL, ofxJSGlobalFunc::_JSFunctionSpec,
    	                                 NULL, NULL);
}

///// JavaScript Destructor
void ofxJSGlobalFunc::JSDestructor(JSContext *cx, JSObject *obj) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (p) delete p;
}

///// JavaScript Object Linking
JSObject *ofxJSGlobalFunc::getJSObject(JSContext *cx) {
	if (!cx) return NULL;
	if (!_JSinternal.o) {
		_JSinternal.o = newJSObject(cx);
		if (!JS_SetPrivate(cx, _JSinternal.o, this)) return NULL;
	}
	return _JSinternal.o;
}

JSObject *ofxJSGlobalFunc::newJSObject(JSContext *cx) {
	return JS_NewObject(cx, &ofxJSGlobalFunc::_jsClass, NULL, NULL);
}

///// JavaScript Function Table
JSFunctionSpec ofxJSGlobalFunc::_JSFunctionSpec[] = {
	{ "Background", JSFUNC_Background, 3, 0, 0 },
	{ "BackgroundGradient", JSFUNC_BackgroundGradient, 6, 0, 0 },
    { "BeginShape", JSFUNC_BeginShape, 0, 0, 0 },
	{ "Bezier", JSFUNC_Bezier, 8, 0, 0 },
	{ "Circle", JSFUNC_Circle, 3, 0, 0 },
	{ "Clamp", JSFUNC_Clamp, 3, 0, 0 },
	{ "Curve", JSFUNC_Curve, 8, 0, 0 },
	{ "DegToRad", JSFUNC_DegToRad, 1, 0, 0 },
	{ "DisableAlphaBlending", JSFUNC_DisableAlphaBlending, 0, 0, 0 },
	{ "DisableDataPath", JSFUNC_DisableDataPath, 0, 0, 0 },
	{ "DisableSetupScreen", JSFUNC_DisableSetupScreen, 0, 0, 0 },
	{ "DisableSmoothing", JSFUNC_DisableSmoothing, 0, 0, 0 },
	{ "Dist", JSFUNC_Dist, 4, 0, 0 },
	{ "DistSquared", JSFUNC_DistSquared, 4, 0, 0 },
	{ "DrawBitmapString", JSFUNC_DrawBitmapString, 3, 0, 0 },
    { "DrawBox", JSFUNC_DrawBox, 6, 0, 0 },
    { "DrawCone", JSFUNC_DrawCone, 5, 0, 0 },
    { "DrawCylinder", JSFUNC_DrawCylinder, 4, 0, 0 },
    { "DrawIcoSphere", JSFUNC_DrawIcoSphere, 4, 0, 0 },
    { "DrawPlane", JSFUNC_DrawPlane, 4, 0, 0 },
    { "DrawSphere", JSFUNC_DrawSphere, 3, 0, 0 },
	{ "Ellipse", JSFUNC_Ellipse, 4, 0, 0 },
	{ "EnableAlphaBlending", JSFUNC_EnableAlphaBlending, 0, 0, 0 },
	{ "EnableDataPath", JSFUNC_EnableDataPath, 0, 0, 0 },
	{ "EnableSetupScreen", JSFUNC_EnableSetupScreen, 0, 0, 0 },
	{ "EnableSmoothing", JSFUNC_EnableSmoothing, 0, 0, 0 },
    { "EndShape", JSFUNC_EndShape, 0, 0, 0 },
	{ "Fill", JSFUNC_Fill, 0, 0, 0 },
	{ "GetElapsedTimeMillis", JSFUNC_GetElapsedTimeMillis, 0, 0, 0 },
	{ "GetElapsedTimef", JSFUNC_GetElapsedTimef, 0, 0, 0 },
	{ "GetFrameNum", JSFUNC_GetFrameNum, 0, 0, 0 },
	{ "GetFrameRate", JSFUNC_GetFrameRate, 0, 0, 0 },
	{ "GetHeight", JSFUNC_GetHeight, 0, 0, 0 },
	{ "GetHours", JSFUNC_GetHours, 0, 0, 0 },
	{ "GetMinutes", JSFUNC_GetMinutes, 0, 0, 0 },
	{ "GetScreenHeight", JSFUNC_GetScreenHeight, 0, 0, 0 },
	{ "GetScreenWidth", JSFUNC_GetScreenWidth, 0, 0, 0 },
	{ "GetSeconds", JSFUNC_GetSeconds, 0, 0, 0 },
	{ "GetWidth", JSFUNC_GetWidth, 0, 0, 0 },
	{ "GetWindowMode", JSFUNC_GetWindowMode, 0, 0, 0 },
	{ "GetWindowPositionX", JSFUNC_GetWindowPositionX, 0, 0, 0 },
	{ "GetWindowPositionY", JSFUNC_GetWindowPositionY, 0, 0, 0 },
	{ "HideCursor", JSFUNC_HideCursor, 0, 0, 0 },
	{ "InRange", JSFUNC_InRange, 3, 0, 0 },
	{ "Lerp", JSFUNC_Lerp, 3, 0, 0 },
	{ "Line", JSFUNC_Line, 4, 0, 0 },
	{ "Map", JSFUNC_Map, 5, 0, 0 },
    { "NextContour", JSFUNC_NextContour, 1, 0, 0 },
	{ "NoFill", JSFUNC_NoFill, 0, 0, 0 },
	{ "Normalize", JSFUNC_Normalize, 3, 0, 0 },
	{ "PopMatrix", JSFUNC_PopMatrix, 0, 0, 0 },
	{ "PushMatrix", JSFUNC_PushMatrix, 0, 0, 0 },
	{ "RadToDeg", JSFUNC_RadToDeg, 1, 0, 0 },
	{ "Random", JSFUNC_Random, 2, 0, 0 },
	{ "RandomHeight", JSFUNC_RandomHeight, 0, 0, 0 },
	{ "RandomWidth", JSFUNC_RandomWidth, 0, 0, 0 },
	{ "Randomf", JSFUNC_Randomf, 0, 0, 0 },
	{ "Randomuf", JSFUNC_Randomuf, 0, 0, 0 },
	{ "Rect", JSFUNC_Rect, 4, 0, 0 },
	{ "ResetElapsedTimeCounter", JSFUNC_ResetElapsedTimeCounter, 0, 0, 0 },
	{ "Rotate", JSFUNC_Rotate, 1, 0, 0 },
	{ "RotateX", JSFUNC_RotateX, 1, 0, 0 },
	{ "RotateY", JSFUNC_RotateY, 1, 0, 0 },
	{ "RotateZ", JSFUNC_RotateZ, 1, 0, 0 },
	{ "SaveFrame", JSFUNC_SaveFrame, 0, 0, 0 },
	{ "SaveScreen", JSFUNC_SaveScreen, 1, 0, 0 },
	{ "Scale", JSFUNC_Scale, 3, 0, 0 },
	{ "SetBackgroundAuto", JSFUNC_SetBackgroundAuto, 1, 0, 0 },
	{ "SetCircleResolution", JSFUNC_SetCircleResolution, 1, 0, 0 },
	{ "SetColor", JSFUNC_SetColor, 1, 0, 0 },
	{ "SetHexColor", JSFUNC_SetHexColor, 1, 0, 0 },
	{ "SetFrameRate", JSFUNC_SetFrameRate, 1, 0, 0 },
	{ "SetFullscreen", JSFUNC_SetFullscreen, 1, 0, 0 },
	{ "SetLineWidth", JSFUNC_SetLineWidth, 1, 0, 0 },
    { "SetPolyMode", JSFUNC_SetPolyMode, 1, 0, 0 },
	{ "SetRectMode", JSFUNC_SetRectMode, 1, 0, 0 },
	{ "SetVerticalSync", JSFUNC_SetVerticalSync, 1, 0, 0 },
	{ "SetWindowPosition", JSFUNC_SetWindowPosition, 2, 0, 0 },
	{ "SetWindowShape", JSFUNC_SetWindowShape, 2, 0, 0 },
	{ "SetWindowTitle", JSFUNC_SetWindowTitle, 1, 0, 0 },
	{ "ShowCursor", JSFUNC_ShowCursor, 0, 0, 0 },
	{ "Sign", JSFUNC_Sign, 1, 0, 0 },
	{ "SleepMillis", JSFUNC_SleepMillis, 1, 0, 0 },
	{ "ToDataPath", JSFUNC_ToDataPath, 2, 0, 0 },
	{ "ToggleFullscreen", JSFUNC_ToggleFullscreen, 0, 0, 0 },
	{ "Translate", JSFUNC_Translate, 3, 0, 0 },
	{ "Triangle", JSFUNC_Triangle, 6, 0, 0 },
	{ "Vertex", JSFUNC_Vertex, 2, 0, 0 },
    { 0, 0, 0, 0, 0 }
};

///// JavaScript Function Wrappers
JSBool ofxJSGlobalFunc::JSFUNC_Background(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void	Background				(float r,float g,float b) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			p->Background(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_BackgroundGradient(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);

	if (argc == 7)
    {
		if (
            JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) &&
            JSVAL_IS_NUMBER(argv[3]) && JSVAL_IS_NUMBER(argv[4]) && JSVAL_IS_NUMBER(argv[5]) && JSVAL_IS_INT(argv[6])
            ) {
			p->BackgroundGradient(
                          __JSVal_TO_float(argv[0]),
                          __JSVal_TO_float(argv[1]),
                          __JSVal_TO_float(argv[2]),
                          __JSVal_TO_float(argv[3]),
                          __JSVal_TO_float(argv[4]),
                          __JSVal_TO_float(argv[5]),
                          __JSVal_TO_int(argv[6])
                          );
			return JS_TRUE;
		}
	}
    
    
	return JS_FALSE;
}



JSBool ofxJSGlobalFunc::JSFUNC_Bezier(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 8) return JS_FALSE;
	if (argc == 8) {
		/* Function: void	Bezier					(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3]) && JSVAL_IS_NUMBER(argv[4]) && JSVAL_IS_NUMBER(argv[5]) && JSVAL_IS_NUMBER(argv[6]) && JSVAL_IS_NUMBER(argv[7])) {
			p->Bezier(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2]),
				__JSVal_TO_float(argv[3]),
				__JSVal_TO_float(argv[4]),
				__JSVal_TO_float(argv[5]),
				__JSVal_TO_float(argv[6]),
				__JSVal_TO_float(argv[7])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}


JSBool ofxJSGlobalFunc::JSFUNC_BeginShape(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	BeginShape	() */
        p->BeginShape();
        return JS_TRUE;
	}
    
    
	return JS_FALSE;
}


JSBool ofxJSGlobalFunc::JSFUNC_Circle(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void	Circle					(float x,float y, float radius) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			p->Circle(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Clamp(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: float	Clamp					(float value, float min, float max) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			*rval = __float_TO_JSVal(cx,p->Clamp(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Curve(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 8) return JS_FALSE;
	if (argc == 8) {
		/* Function: void	Curve					(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3]) && JSVAL_IS_NUMBER(argv[4]) && JSVAL_IS_NUMBER(argv[5]) && JSVAL_IS_NUMBER(argv[6]) && JSVAL_IS_NUMBER(argv[7])) {
			p->Curve(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2]),
				__JSVal_TO_float(argv[3]),
				__JSVal_TO_float(argv[4]),
				__JSVal_TO_float(argv[5]),
				__JSVal_TO_float(argv[6]),
				__JSVal_TO_float(argv[7])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_DegToRad(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: float	DegToRad				(float degrees) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			*rval = __float_TO_JSVal(cx,p->DegToRad(__JSVal_TO_float(argv[0])));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_DisableAlphaBlending(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	DisableAlphaBlending	() */
			p->DisableAlphaBlending();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_DisableDataPath(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	DisableDataPath			() */
			p->DisableDataPath();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_DisableSetupScreen(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	DisableSetupScreen		() */
			p->DisableSetupScreen();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_DisableSmoothing(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	DisableSmoothing		() */
			p->DisableSmoothing();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Dist(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 4) return JS_FALSE;
	if (argc == 4) {
		/* Function: float	Dist					(float x1, float y1, float x2, float y2) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3])) {
			*rval = __float_TO_JSVal(cx,p->Dist(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2]),
				__JSVal_TO_float(argv[3])
			));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_DistSquared(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 4) return JS_FALSE;
	if (argc == 4) {
		/* Function: float	DistSquared				(float x1, float y1, float x2, float y2) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3])) {
			*rval = __float_TO_JSVal(cx,p->DistSquared(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2]),
				__JSVal_TO_float(argv[3])
			));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_DrawBitmapString(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void	DrawBitmapString		(string textString, float x, float y) */
		if (JSVAL_IS_STRING(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			p->DrawBitmapString(
				__JSVal_TO_string(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_DrawBox(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 6) return JS_FALSE;
	if (argc == 6) {
		/* Function: void	DrawBox					(float x, float y, float z, float width, float height, float depth) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3]) && JSVAL_IS_NUMBER(argv[4]) && JSVAL_IS_NUMBER(argv[5])) {
			p->DrawBox(
                       __JSVal_TO_float(argv[0]),
                       __JSVal_TO_float(argv[1]),
                       __JSVal_TO_float(argv[2]),
                       __JSVal_TO_float(argv[3]),
                       __JSVal_TO_float(argv[4]),
                       __JSVal_TO_float(argv[5])
                       );
			return JS_TRUE;
		}
	}
    
    
	return JS_FALSE;
}


JSBool ofxJSGlobalFunc::JSFUNC_DrawCone(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 5) return JS_FALSE;
	if (argc == 5) {
		/* Function: void	DrawCone     (float x, float y, float z, float radius, float height) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3]) && JSVAL_IS_NUMBER(argv[4])) {
			p->DrawCone(
                       __JSVal_TO_float(argv[0]),
                       __JSVal_TO_float(argv[1]),
                       __JSVal_TO_float(argv[2]),
                       __JSVal_TO_float(argv[3]),
                       __JSVal_TO_float(argv[4])
                       );
			return JS_TRUE;
		}
	}
    
    
	return JS_FALSE;
}


JSBool ofxJSGlobalFunc::JSFUNC_DrawCylinder(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 4) return JS_FALSE;
	if (argc == 4) {
		/* Function: void	DrawCylinder    (float x, float y, float radius, float height) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3]) ) {
			p->DrawCylinder(
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


JSBool ofxJSGlobalFunc::JSFUNC_DrawIcoSphere(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 4) return JS_FALSE;
	if (argc == 4) {
		/* Function: void	DrawIcoSphere   (float x, float y, float z, float radius) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3]) ) {
			p->DrawIcoSphere(
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


JSBool ofxJSGlobalFunc::JSFUNC_DrawPlane(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 4) return JS_FALSE;
	if (argc == 4) {
		/* Function: void	DrawPlane(float x, float y, float width, float height) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3]) ) {
			p->DrawPlane(
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



JSBool ofxJSGlobalFunc::JSFUNC_DrawSphere(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void	DrawSphere(float x, float y, float radius) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])  ) {
			p->DrawSphere(
                         __JSVal_TO_float(argv[0]),
                         __JSVal_TO_float(argv[1]),
                         __JSVal_TO_float(argv[2])
                         );
			return JS_TRUE;
		}
	}
    
    
	return JS_FALSE;
}




JSBool ofxJSGlobalFunc::JSFUNC_Ellipse(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 4) return JS_FALSE;
	if (argc == 4) {
		/* Function: void	Ellipse					(float x, float y, float width, float height) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3])) {
			p->Ellipse(
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

JSBool ofxJSGlobalFunc::JSFUNC_EnableAlphaBlending(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	EnableAlphaBlending		() */
			p->EnableAlphaBlending();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_EnableDataPath(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	EnableDataPath			() */
			p->EnableDataPath();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_EnableSetupScreen(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	EnableSetupScreen		() */
			p->EnableSetupScreen();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_EnableSmoothing(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	EnableSmoothing			() */
			p->EnableSmoothing();
			return JS_TRUE;
	}


	return JS_FALSE;
}


JSBool ofxJSGlobalFunc::JSFUNC_EndShape(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	EndShape	() */
        p->EndShape();
        return JS_TRUE;
	}
    
    
	return JS_FALSE;
}



JSBool ofxJSGlobalFunc::JSFUNC_Fill(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	Fill					() */
			p->Fill();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetElapsedTimeMillis(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int		GetElapsedTimeMillis	() */
			*rval = __int_TO_JSVal(cx,p->GetElapsedTimeMillis());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetElapsedTimef(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float 	GetElapsedTimef			() */
			*rval = __float_TO_JSVal(cx,p->GetElapsedTimef());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetFrameNum(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int 	GetFrameNum				() */
			*rval = __int_TO_JSVal(cx,p->GetFrameNum());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetFrameRate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float 	GetFrameRate			() */
			*rval = __float_TO_JSVal(cx,p->GetFrameRate());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetHeight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int 	GetHeight				() */
			*rval = __int_TO_JSVal(cx,p->GetHeight());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetHours(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int		GetHours				() */
			*rval = __int_TO_JSVal(cx,p->GetHours());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetMinutes(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int		GetMinutes				() */
			*rval = __int_TO_JSVal(cx,p->GetMinutes());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetScreenHeight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int 	GetScreenHeight			() */
			*rval = __int_TO_JSVal(cx,p->GetScreenHeight());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetScreenWidth(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int 	GetScreenWidth			() */
			*rval = __int_TO_JSVal(cx,p->GetScreenWidth());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetSeconds(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int		GetSeconds				() */
			*rval = __int_TO_JSVal(cx,p->GetSeconds());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetWidth(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int 	GetWidth				() */
			*rval = __int_TO_JSVal(cx,p->GetWidth());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetWindowMode(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int		GetWindowMode			() */
			*rval = __int_TO_JSVal(cx,p->GetWindowMode());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetWindowPositionX(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int		GetWindowPositionX		() */
			*rval = __int_TO_JSVal(cx,p->GetWindowPositionX());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_GetWindowPositionY(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int 	GetWindowPositionY		() */
			*rval = __int_TO_JSVal(cx,p->GetWindowPositionY());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_HideCursor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void 	HideCursor				() */
			p->HideCursor();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_InRange(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: bool	InRange					(float t, float min, float max) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			*rval = __bool_TO_JSVal(cx,p->InRange(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Lerp(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: float	Lerp					(float start, float stop, float amt) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			*rval = __float_TO_JSVal(cx,p->Lerp(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Line(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 4) return JS_FALSE;
	if (argc == 4) {
		/* Function: void	Line					(float x1,float y1,float x2,float y2) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3])) {
			p->Line(
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

JSBool ofxJSGlobalFunc::JSFUNC_Map(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 5) return JS_FALSE;
	if (argc == 5) {
		/* Function: float	Map						(float value, float inputMin, float inputMax, float outputMin, float outputMax) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3]) && JSVAL_IS_NUMBER(argv[4])) {
			*rval = __float_TO_JSVal(cx,p->Map(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2]),
				__JSVal_TO_float(argv[3]),
				__JSVal_TO_float(argv[4])
			));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}


JSBool ofxJSGlobalFunc::JSFUNC_NextContour(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 	NextContour			(bool bSync) */
		if (JSVAL_IS_BOOLEAN(argv[0])) {
			p->NextContour(__JSVal_TO_bool(argv[0]));
			return JS_TRUE;
		}
	}
    
    
	return JS_FALSE;
}


JSBool ofxJSGlobalFunc::JSFUNC_NoFill(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	NoFill					() */
			p->NoFill();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Normalize(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: float	Normalize				(float value, float min, float max) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			*rval = __float_TO_JSVal(cx,p->Normalize(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_PopMatrix(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	PopMatrix				() */
			p->PopMatrix();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_PushMatrix(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	PushMatrix				() */
			p->PushMatrix();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_RadToDeg(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: float	RadToDeg				(float radians) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			*rval = __float_TO_JSVal(cx,p->RadToDeg(__JSVal_TO_float(argv[0])));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Random(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: float	Random					(float val0, float val1) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			*rval = __float_TO_JSVal(cx,p->Random(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1])
			));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_RandomHeight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float	RandomHeight			() */
			*rval = __float_TO_JSVal(cx,p->RandomHeight());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_RandomWidth(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float	RandomWidth				() */
			*rval = __float_TO_JSVal(cx,p->RandomWidth());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Randomf(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float	Randomf					() */
			*rval = __float_TO_JSVal(cx,p->Randomf());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Randomuf(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float	Randomuf				() */
			*rval = __float_TO_JSVal(cx,p->Randomuf());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Rect(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 4) return JS_FALSE;
	if (argc == 4) {
		/* Function: void	Rect					(float x1,float y1,float w, float h) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3])) {
			p->Rect(
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

JSBool ofxJSGlobalFunc::JSFUNC_ResetElapsedTimeCounter(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	ResetElapsedTimeCounter	() */
			p->ResetElapsedTimeCounter();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Rotate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void	Rotate					(float degrees) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->Rotate(__JSVal_TO_float(argv[0]));
			return JS_TRUE;
		}
	}
	if (argc == 4) {
		/* Function: void	Rotate					(float degrees, float vecX, float vecY, float vecZ) */
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

JSBool ofxJSGlobalFunc::JSFUNC_RotateX(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void	RotateX					(float degrees) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->RotateX(__JSVal_TO_float(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_RotateY(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void	RotateY					(float degrees) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->RotateY(__JSVal_TO_float(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_RotateZ(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void	RotateZ					(float degrees) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->RotateZ(__JSVal_TO_float(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_SaveFrame(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	SaveFrame				() */
			p->SaveFrame();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_SaveScreen(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void	SaveScreen				(string filename) */
		if (JSVAL_IS_STRING(argv[0])) {
			p->SaveScreen(__JSVal_TO_string(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Scale(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void	Scale					(float xAmnt, float yAmnt, float zAmnt) */
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

JSBool ofxJSGlobalFunc::JSFUNC_SetBackgroundAuto(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 	SetBackgroundAuto		(bool bManual) */
		if (JSVAL_IS_BOOLEAN(argv[0])) {
			p->SetBackgroundAuto(__JSVal_TO_bool(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_SetCircleResolution(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void	SetCircleResolution		(int res) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->SetCircleResolution(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_SetColor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void	SetColor				(int hexColor) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->SetColor(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}
	if (argc == 3) {
		/* Function: void	SetColor				(int r, int g, int b) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			p->SetColor(
				__JSVal_TO_int(argv[0]),
				__JSVal_TO_int(argv[1]),
				__JSVal_TO_int(argv[2])
			);
			return JS_TRUE;
		}
	}
	if (argc == 4) {
		/* Function: void	SetColor				(int r, int g, int b, int a) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3])) {
			p->SetColor(
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

JSBool ofxJSGlobalFunc::JSFUNC_SetHexColor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) 
	{
		/* Function: void	SetHexColor				(int hexColor) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->SetHexColor(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}
	
	return JS_FALSE;
}


JSBool ofxJSGlobalFunc::JSFUNC_SetFrameRate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 	SetFrameRate			(int targetRate) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->SetFrameRate(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_SetFullscreen(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void	SetFullscreen			(bool fullscreen) */
		if (JSVAL_IS_BOOLEAN(argv[0])) {
			p->SetFullscreen(__JSVal_TO_bool(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_SetLineWidth(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void	SetLineWidth			(float lineWidth) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->SetLineWidth(__JSVal_TO_float(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}


JSBool ofxJSGlobalFunc::JSFUNC_SetPolyMode(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
    ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		if (JSVAL_IS_NUMBER(argv[0])) {
            
			p->SetPolyMode(__JSVal_TO_int(argv[0])
                          
            
                           );
			return JS_TRUE;		}
	}
    
    
	return JS_FALSE;
}





JSBool ofxJSGlobalFunc::JSFUNC_SetRectMode(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
/*
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->SetRectMode(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}
*/

	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_SetVerticalSync(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 	SetVerticalSync			(bool bSync) */
		if (JSVAL_IS_BOOLEAN(argv[0])) {
			p->SetVerticalSync(__JSVal_TO_bool(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_SetWindowPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void 	SetWindowPosition		(int x, int y) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->SetWindowPosition(
				__JSVal_TO_int(argv[0]),
				__JSVal_TO_int(argv[1])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_SetWindowShape(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void 	SetWindowShape			(int width, int height) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
			p->SetWindowShape(
				__JSVal_TO_int(argv[0]),
				__JSVal_TO_int(argv[1])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_SetWindowTitle(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 	SetWindowTitle			(string title) */
		if (JSVAL_IS_STRING(argv[0])) {
			p->SetWindowTitle(__JSVal_TO_string(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_ShowCursor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void 	ShowCursor				() */
			p->ShowCursor();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Sign(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: int		Sign					(float n) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			*rval = __int_TO_JSVal(cx,p->Sign(__JSVal_TO_float(argv[0])));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_SleepMillis(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void	SleepMillis				(int millis) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->SleepMillis(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_ToDataPath(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: string 	ToDataPath				(string path, bool absolute) */
		if (JSVAL_IS_STRING(argv[0]) && JSVAL_IS_BOOLEAN(argv[1])) {
			*rval = __string_TO_JSVal(cx,p->ToDataPath(
				__JSVal_TO_string(argv[0]),
				__JSVal_TO_bool(argv[1])
			));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_ToggleFullscreen(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void	ToggleFullscreen		() */
			p->ToggleFullscreen();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Translate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void	Translate				(float x, float y, float z) */
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

JSBool ofxJSGlobalFunc::JSFUNC_Triangle(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 6) return JS_FALSE;
	if (argc == 6) {
		/* Function: void	Triangle				(float x1,float y1,float x2,float y2,float x3, float y3) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3]) && JSVAL_IS_NUMBER(argv[4]) && JSVAL_IS_NUMBER(argv[5])) {
			p->Triangle(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2]),
				__JSVal_TO_float(argv[3]),
				__JSVal_TO_float(argv[4]),
				__JSVal_TO_float(argv[5])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSGlobalFunc::JSFUNC_Vertex(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSGlobalFunc *p = (ofxJSGlobalFunc*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void	Vertex				(float x,float y) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) ) {
			p->Vertex(
                        __JSVal_TO_float(argv[0]),
                        __JSVal_TO_float(argv[1])
                    
                        );
			return JS_TRUE;
		}
	}
    
    
	return JS_FALSE;
}


