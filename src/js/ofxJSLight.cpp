// Generated source file -- DO NOT EDIT
// Javascript code from "ofxJSLight.h"


///// JavaScript Class Definition
JSClass ofxJSLight::_jsClass = {
	"ofxJSLight", JSCLASS_HAS_PRIVATE,
	JS_PropertyStub, JS_PropertyStub,
	JS_PropertyStub, JS_PropertyStub,
	JS_EnumerateStub, JS_ResolveStub,
	JS_ConvertStub, ofxJSLight::JSDestructor,
	0, 0, 0, 0, 
	0, 0, 0, 0
};

///// JavaScript Initialization Method
JSObject *ofxJSLight::JSInit(JSContext *cx, JSObject *obj) {
	if (obj==NULL)
		obj = JS_GetGlobalObject(cx);
	jsval oldobj;
	if (JS_TRUE == JS_LookupProperty(cx, obj, ofxJSLight::_jsClass.name, &oldobj) && JSVAL_IS_OBJECT(oldobj))
		return JSVAL_TO_OBJECT(oldobj);
	return JS_InitClass(cx, obj, /*NULL*/ofxJSNode::JSInit(cx, obj), &ofxJSLight::_jsClass,
    	                                 ofxJSLight::JSConstructor, 0,
    	                                 NULL, ofxJSLight::_JSFunctionSpec,
    	                                 NULL, NULL);
}

// 	ofxJSNode::JSInit	(cx, obj);


///// JavaScript Constructor
JSBool ofxJSLight::JSConstructor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = NULL;
	if (argc == 0) {
		/* Constructor: ofxJSLight					() */
			p = new ofxJSLight;
	}


	if (!p || !JS_SetPrivate(cx, obj, p)) return JS_FALSE;
	p->_JSinternal.o = obj;
	*rval = OBJECT_TO_JSVAL(obj);
	return JS_TRUE;
}

///// JavaScript Destructor
void ofxJSLight::JSDestructor(JSContext *cx, JSObject *obj) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (p) delete p;
}

///// JavaScript Object Linking
JSObject *ofxJSLight::getJSObject(JSContext *cx) {
	if (!cx) return NULL;
	if (!_JSinternal.o) {
		_JSinternal.o = newJSObject(cx);
		if (!JS_SetPrivate(cx, _JSinternal.o, this)) return NULL;
	}
	return _JSinternal.o;
}

JSObject *ofxJSLight::newJSObject(JSContext *cx) {
	return JS_NewObject(cx, &ofxJSLight::_jsClass, NULL, NULL);
}

///// JavaScript Function Table
JSFunctionSpec ofxJSLight::_JSFunctionSpec[] = {
	{ "destroy", JSFUNC_destroy, 0, 0, 0 },
	{ "disable", JSFUNC_disable, 0, 0, 0 },
	{ "enable", JSFUNC_enable, 0, 0, 0 },
	{ "getLightID", JSFUNC_getLightID, 0, 0, 0 },
    { "setAmbientColor", JSFUNC_setAmbientColor, 3, 0, 0 },
    { "setDiffuseColor", JSFUNC_setDiffuseColor, 3, 0, 0 },
    { "setDirectional", JSFUNC_setDirectional, 0, 0, 0 },
    { "setPointLight", JSFUNC_setPointLight, 0, 0, 0 },
    { "setSpecularColor", JSFUNC_setSpecularColor, 3, 0, 0 },
    { "setSpotlight", JSFUNC_setSpotlight, 2, 0, 0 },
	{ 0, 0, 0, 0, 0 }
    
};

///// JavaScript Function Wrappers
JSBool ofxJSLight::JSFUNC_destroy(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void						destroy			() */
			p->destroy();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSLight::JSFUNC_disable(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void						disable			() */
			p->disable();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSLight::JSFUNC_enable(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void						enable			() */
			p->enable();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSLight::JSFUNC_getLightID(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int							getLightID		() */
			*rval = __int_TO_JSVal(cx,p->getLightID());
			return JS_TRUE;
	}


	return JS_FALSE;
}


JSBool ofxJSLight::JSFUNC_setAmbientColor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 3) {
		/* Function: int							getLightID		() */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {

            p->setAmbientColor(
                               __JSVal_TO_float(argv[0]),
                               __JSVal_TO_float(argv[1]),
                               __JSVal_TO_float(argv[2])
            );
        
        return JS_TRUE;
	}
    
    
	return JS_FALSE;
}
}


JSBool ofxJSLight::JSFUNC_setDiffuseColor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 3) {
		/* Function: int							getLightID		() */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
            
            p->setDiffuseColor(
                               __JSVal_TO_float(argv[0]),
                               __JSVal_TO_float(argv[1]),
                               __JSVal_TO_float(argv[2])
                               );
            
            return JS_TRUE;
        }
        
        
        return JS_FALSE;
    }
}


JSBool ofxJSLight::JSFUNC_setDirectional(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void						disable			() */
        p->setDirectional();
        return JS_TRUE;
	}
    
    
	return JS_FALSE;
}

JSBool ofxJSLight::JSFUNC_setPointLight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void						setPointLight		() */
        p->setPointLight();
        return JS_TRUE;
	}
    
    
	return JS_FALSE;
}

JSBool ofxJSLight::JSFUNC_setSpecularColor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 3) {
		/* Function: int							setSpecularColor		() */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
            
            p->setSpecularColor(
                               __JSVal_TO_float(argv[0]),
                               __JSVal_TO_float(argv[1]),
                               __JSVal_TO_float(argv[2])
                               );
            
            return JS_TRUE;
        }
        
        
        return JS_FALSE;
    }
}

JSBool ofxJSLight::JSFUNC_setSpotlight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 2) {
		/* Function: int							setSpotlight		(float spotCutOff=45.f, float exponent=0.f) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1])) {
            
            p->setSpotlight(
                                __JSVal_TO_float(argv[0]),
                                __JSVal_TO_float(argv[1])
                                );
            
            return JS_TRUE;
        }
        
        
        return JS_FALSE;
    }
}
