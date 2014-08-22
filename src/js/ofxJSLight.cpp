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
    { "setPosition", JSFUNC_setPosition, 3, 0, 0 },
    { "truck", JSFUNC_truck, 1, 0, 0 },
    { "boom", JSFUNC_boom, 1, 0, 0 },
    { "dolly", JSFUNC_dolly, 1, 0, 0 },
    { "getX", JSFUNC_getX, 0, 0, 0 },
    { "getY", JSFUNC_getY, 0, 0, 0 },
    { "getZ", JSFUNC_getZ, 0, 0, 0 },
    { "move", JSFUNC_move, 3, 0, 0 },
    { "rotate", JSFUNC_rotate, 4, 0, 0 },
    { "setGlobalPosition", JSFUNC_setGlobalPosition, 3, 0, 0 },
    { "orbit", JSFUNC_orbit, 6, 0, 0 },
    { "setOrientation", JSFUNC_orbit, 3, 0, 0 },
    { "rotateAround", JSFUNC_rotateAround, 7, 0, 0 },
	{ 0, 0, 0, 0, 0 }
    
};

///// JavaScript Function Wrappers



JSBool ofxJSLight::JSFUNC_boom(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 1) {
		/* Function: void							boom		(float amount) */
		if (JSVAL_IS_NUMBER(argv[0])) {
            
            p->boom(
                            __JSVal_TO_float(argv[0])
                            );
            
            return JS_TRUE;
        }
        
        
        return JS_FALSE;
    }
}


JSBool ofxJSLight::JSFUNC_destroy(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void						destroy			() */
			p->destroy();
			return JS_TRUE;
	}


	return JS_FALSE;
}


JSBool ofxJSLight::JSFUNC_dolly(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 1) {
		/* Function: void							dolly		(float amount) */
		if (JSVAL_IS_NUMBER(argv[0])) {
            
            p->dolly(
                    __JSVal_TO_float(argv[0])
                    );
            
            return JS_TRUE;
        }
        
        
        return JS_FALSE;
    }
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


JSBool ofxJSLight::JSFUNC_getX(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float							getX		() */
        *rval = __int_TO_JSVal(cx,p->getX());
        return JS_TRUE;
	}
    
    
	return JS_FALSE;
}

JSBool ofxJSLight::JSFUNC_getY(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float							getY		() */
        *rval = __int_TO_JSVal(cx,p->getY());
        return JS_TRUE;
	}
    
    
	return JS_FALSE;
}

JSBool ofxJSLight::JSFUNC_getZ(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float							getZ		() */
        *rval = __int_TO_JSVal(cx,p->getZ());
        return JS_TRUE;
	}
    
    
	return JS_FALSE;
}


JSBool ofxJSLight::JSFUNC_move(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 3) {
		/* Function: void							move		(float x, float y, float z) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
            
            p->move(
                     __JSVal_TO_float(argv[0]),
                     __JSVal_TO_float(argv[1]),
                     __JSVal_TO_float(argv[2])
                     );
            
            return JS_TRUE;
        }
        
        
        return JS_FALSE;
    }
}



JSBool ofxJSLight::JSFUNC_orbit(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc < 6) return JS_FALSE;
	if (argc == 6) {
		/* Function: void	orbit				(float longitude, float latitude, float radius, float cx, float cy, float cz) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3]) && JSVAL_IS_NUMBER(argv[4]) && JSVAL_IS_NUMBER(argv[5])) {
			p->orbit(
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



JSBool ofxJSLight::JSFUNC_pan(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 1) {
		/* Function: void							pan(float degrees) */
		if (JSVAL_IS_NUMBER(argv[0])) {
            
            p->pan(
                    __JSVal_TO_float(argv[0])
                    );
            
            return JS_TRUE;
        }
        
        
        return JS_FALSE;
    }
}



JSBool ofxJSLight::JSFUNC_roll(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 1) {
		/* Function: void							roll(float degrees) */
		if (JSVAL_IS_NUMBER(argv[0])) {
            
            p->roll(
                    __JSVal_TO_float(argv[0])
                    );
            
            return JS_TRUE;
        }
        
        
        return JS_FALSE;
    }
}


JSBool ofxJSLight::JSFUNC_rotate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 4) {
		/* Function: void							rotate		(float degrees, float vx, float vy, float vz) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3])) {
            
            p->rotate(
                    __JSVal_TO_float(argv[0]),
                    __JSVal_TO_float(argv[1]),
                    __JSVal_TO_float(argv[2]),
                    __JSVal_TO_float(argv[3])
                    );
            
            return JS_TRUE;
        }
        
        
        return JS_FALSE;
    }
}

JSBool ofxJSLight::JSFUNC_setPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 3) {
		/* Function: void							setPosition(float px, float py, float pz) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
            
            p->setPosition(
                           __JSVal_TO_float(argv[0]),
                           __JSVal_TO_float(argv[1]),
                           __JSVal_TO_float(argv[2])
                           );
            
            return JS_TRUE;
        }
        
        
        return JS_FALSE;
    }
}



JSBool ofxJSLight::JSFUNC_rotateAround(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 7) {
		/* Function: int							rotateAround		(float degrees, float ax, float ay, float az, float cx, float cy, float cz) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2]) && JSVAL_IS_NUMBER(argv[3]) && JSVAL_IS_NUMBER(argv[4]) && JSVAL_IS_NUMBER(argv[5]) && JSVAL_IS_NUMBER(argv[6])) {

            p->rotateAround(
                               __JSVal_TO_float(argv[0]),
                               __JSVal_TO_float(argv[1]),
                               __JSVal_TO_float(argv[2]),
                               __JSVal_TO_float(argv[3]),
                               __JSVal_TO_float(argv[4]),
                               __JSVal_TO_float(argv[5]),
                               __JSVal_TO_float(argv[6])
            );
        
        return JS_TRUE;
	}
    
    
	return JS_FALSE;
}
}

JSBool ofxJSLight::JSFUNC_setGlobalPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 3) {
		/* Function: void							setGlobalPosition		(float px, float py, float pz) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
            
            p->setGlobalPosition(
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

JSBool ofxJSLight::JSFUNC_setOrientation(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void	setOrientation				(float rot_x, float rot_y, float rot_z) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			p->setOrientation(
                     __JSVal_TO_float(argv[0]),
                     __JSVal_TO_float(argv[1]),
                     __JSVal_TO_float(argv[2])
                     );
			return JS_TRUE;
		}
	
    
    
	return JS_FALSE;
}

}

JSBool ofxJSLight::JSFUNC_setPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
    if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void							setPosition(float px, float py, float pz) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
            
            p->setPosition(
                            __JSVal_TO_float(argv[0]),
                            __JSVal_TO_float(argv[1]),
                            __JSVal_TO_float(argv[2])
                            );
            
            return JS_TRUE;
        }
        
        
        return JS_FALSE;
    }
}


JSBool ofxJSLight::JSFUNC_tilt(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 1) {
		/* Function: void							tilt(float degrees) */
		if (JSVAL_IS_NUMBER(argv[0])) {
            
            p->tilt(
                           __JSVal_TO_float(argv[0])
                           );
            
            return JS_TRUE;
        }
        
        
        return JS_FALSE;
    }
}



JSBool ofxJSLight::JSFUNC_truck(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSLight *p = (ofxJSLight*)JS_GetPrivate(cx, obj);
	if (argc == 1) {
		/* Function: void							truck		(float amount) */
		if (JSVAL_IS_NUMBER(argv[0])) {
            
            p->truck(
                    __JSVal_TO_float(argv[0])
                    );
            
            return JS_TRUE;
        }
        
        
        return JS_FALSE;
    }
}
