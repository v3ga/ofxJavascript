// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSVideoPlayer.h"


///// JavaScript Class Definition
JSClass ofxJSVideoPlayer::_jsClass = {
	"ofxJSVideoPlayer", JSCLASS_HAS_PRIVATE,
	JS_PropertyStub, JS_PropertyStub,
	ofxJSVideoPlayer::JSGetProperty, ofxJSVideoPlayer::JSSetProperty,
	JS_EnumerateStub, JS_ResolveStub,
	JS_ConvertStub, ofxJSVideoPlayer::JSDestructor,
	0, 0, 0, 0, 
	0, 0, 0, 0
};

///// JavaScript Initialization Method
JSObject *ofxJSVideoPlayer::JSInit(JSContext *cx, JSObject *obj) {
	if (obj==NULL)
		obj = JS_GetGlobalObject(cx);
	jsval oldobj;
	if (JS_TRUE == JS_LookupProperty(cx, obj, ofxJSVideoPlayer::_jsClass.name, &oldobj) && JSVAL_IS_OBJECT(oldobj))
		return JSVAL_TO_OBJECT(oldobj);
	return JS_InitClass(cx, obj, NULL, &ofxJSVideoPlayer::_jsClass,
    	                                 ofxJSVideoPlayer::JSConstructor, 0,
    	                                 ofxJSVideoPlayer::_JSPropertySpec, ofxJSVideoPlayer::_JSFunctionSpec,
    	                                 NULL, NULL);
}

///// JavaScript Constructor
JSBool ofxJSVideoPlayer::JSConstructor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = NULL;
	if (argc == 0) {
		/* Constructor: ofxJSVideoPlayer		() */
			p = new ofxJSVideoPlayer;
	}


	if (!p || !JS_SetPrivate(cx, obj, p)) return JS_FALSE;
	p->_JSinternal.o = obj;
	*rval = OBJECT_TO_JSVAL(obj);
	return JS_TRUE;
}

///// JavaScript Destructor
void ofxJSVideoPlayer::JSDestructor(JSContext *cx, JSObject *obj) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (p) delete p;
}

///// JavaScript Object Linking
JSObject *ofxJSVideoPlayer::getJSObject(JSContext *cx) {
	if (!cx) return NULL;
	if (!_JSinternal.o) {
		_JSinternal.o = newJSObject(cx);
		if (!JS_SetPrivate(cx, _JSinternal.o, this)) return NULL;
	}
	return _JSinternal.o;
}

JSObject *ofxJSVideoPlayer::newJSObject(JSContext *cx) {
	return JS_NewObject(cx, &ofxJSVideoPlayer::_jsClass, NULL, NULL);
}

///// JavaScript Variable Table
JSPropertySpec ofxJSVideoPlayer::_JSPropertySpec[] = {
	{ "width", JSVAR_width, JSPROP_ENUMERATE, 0, 0},
	{ "height", JSVAR_height, JSPROP_ENUMERATE, 0, 0},
	{ "speed", JSVAR_speed, JSPROP_ENUMERATE, 0, 0},
	{ 0, 0, 0, 0, 0 }
};

///// JavaScript Get Property Wrapper
JSBool ofxJSVideoPlayer::JSGetProperty(JSContext *cx, JSObject *obj, jsval id, jsval *vp) {
	if (JSVAL_IS_INT(id)) {
		ofxJSVideoPlayer *priv;
		switch(JSVAL_TO_INT(id)) {
			case JSVAR_width:
				priv = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
				if (priv==NULL)
					*vp = JSVAL_NULL;
				else
					*vp = __int_TO_JSVal(cx,priv->getWidth());
				break;

			case JSVAR_height:
				priv = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
				if (priv==NULL)
					*vp = JSVAL_NULL;
				else
					*vp = __int_TO_JSVal(cx,priv->getHeight());
				break;

			case JSVAR_speed:
				priv = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
				if (priv==NULL)
					*vp = JSVAL_NULL;
				else
					*vp = __float_TO_JSVal(cx,priv->getSpeed());
				break;

		}
	}
	return JS_TRUE;
}

///// JavaScript Set Property Wrapper
JSBool ofxJSVideoPlayer::JSSetProperty(JSContext *cx, JSObject *obj, jsval id, jsval *vp) {
	if (JSVAL_IS_INT(id)) {
		ofxJSVideoPlayer *priv;
		switch(JSVAL_TO_INT(id)) {
			case JSVAR_width:
				priv = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
				if (priv!=NULL)
					priv->setWidth(__JSVal_TO_int(*vp));
				break;

			case JSVAR_height:
				priv = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
				if (priv!=NULL)
					priv->setHeight(__JSVal_TO_int(*vp));
				break;

			case JSVAR_speed:
				priv = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
				if (priv!=NULL)
					priv->setSpeed(__JSVal_TO_float(*vp));
				break;

		}
	}
	return JS_TRUE;
}

///// JavaScript Function Table
JSFunctionSpec ofxJSVideoPlayer::_JSFunctionSpec[] = {
	{ "close", JSFUNC_close, 0, 0, 0 },
	{ "closeMovie", JSFUNC_closeMovie, 0, 0, 0 },
	{ "draw", JSFUNC_draw, 2, 0, 0 },
	{ "firstFrame", JSFUNC_firstFrame, 0, 0, 0 },
	{ "getCurrentFrame", JSFUNC_getCurrentFrame, 0, 0, 0 },
	{ "getDuration", JSFUNC_getDuration, 0, 0, 0 },
	{ "getIsMovieDone", JSFUNC_getIsMovieDone, 0, 0, 0 },
	{ "getPosition", JSFUNC_getPosition, 0, 0, 0 },
	{ "getTotalNumFrames", JSFUNC_getTotalNumFrames, 0, 0, 0 },
	{ "isFrameNew", JSFUNC_isFrameNew, 0, 0, 0 },
	{ "loadMovie", JSFUNC_loadMovie, 1, 0, 0 },
	{ "nextFrame", JSFUNC_nextFrame, 0, 0, 0 },
	{ "play", JSFUNC_play, 0, 0, 0 },
	{ "previousFrame", JSFUNC_previousFrame, 0, 0, 0 },
	{ "resetAnchor", JSFUNC_resetAnchor, 0, 0, 0 },
	{ "setAnchorPercent", JSFUNC_setAnchorPercent, 2, 0, 0 },
	{ "setAnchorPoint", JSFUNC_setAnchorPoint, 2, 0, 0 },
	{ "setFrame", JSFUNC_setFrame, 1, 0, 0 },
	{ "setLoopState", JSFUNC_setLoopState, 1, 0, 0 },
	{ "setPaused", JSFUNC_setPaused, 1, 0, 0 },
	{ "setPosition", JSFUNC_setPosition, 1, 0, 0 },
	{ "setUseTexture", JSFUNC_setUseTexture, 1, 0, 0 },
	{ "setVolume", JSFUNC_setVolume, 1, 0, 0 },
	{ "stop", JSFUNC_stop, 0, 0, 0 },
	{ "update", JSFUNC_update, 0, 0, 0 },
	{ 0, 0, 0, 0, 0 }
};

///// JavaScript Function Wrappers
JSBool ofxJSVideoPlayer::JSFUNC_close(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void 				close() */
			p->close();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_closeMovie(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void 				closeMovie() */
			p->closeMovie();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_draw(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
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

JSBool ofxJSVideoPlayer::JSFUNC_firstFrame(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void				firstFrame() */
			p->firstFrame();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_getCurrentFrame(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int					getCurrentFrame() */
			*rval = __int_TO_JSVal(cx,p->getCurrentFrame());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_getDuration(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float 				getDuration() */
			*rval = __float_TO_JSVal(cx,p->getDuration());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_getIsMovieDone(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: bool				getIsMovieDone() */
			*rval = __bool_TO_JSVal(cx,p->getIsMovieDone());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_getPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float 				getPosition() */
			*rval = __float_TO_JSVal(cx,p->getPosition());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_getTotalNumFrames(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: int					getTotalNumFrames() */
			*rval = __int_TO_JSVal(cx,p->getTotalNumFrames());
			return JS_TRUE;
	}


	return JS_FALSE;
}


JSBool ofxJSVideoPlayer::JSFUNC_isFrameNew(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: bool 				isFrameNew() */
			*rval = __bool_TO_JSVal(cx,p->isFrameNew());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_loadMovie(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: bool 				loadMovie(string name) */
		if (JSVAL_IS_STRING(argv[0])) {
			*rval = __bool_TO_JSVal(cx,p->loadMovie(__JSVal_TO_string(argv[0])));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_nextFrame(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void				nextFrame() */
			p->nextFrame();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_play(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void 				play() */
			p->play();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_previousFrame(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void				previousFrame() */
			p->previousFrame();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_resetAnchor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void				resetAnchor() */
			p->resetAnchor();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_setAnchorPercent(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
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

JSBool ofxJSVideoPlayer::JSFUNC_setAnchorPoint(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
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

JSBool ofxJSVideoPlayer::JSFUNC_setFrame(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void				setFrame(int frame) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->setFrame(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_setLoopState(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 				setLoopState(int state) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->setLoopState(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_setPaused(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 				setPaused(bool bPause) */
		if (JSVAL_IS_BOOLEAN(argv[0])) {
			p->setPaused(__JSVal_TO_bool(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_setPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 				setPosition(float pct) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->setPosition(__JSVal_TO_float(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_setUseTexture(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
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

JSBool ofxJSVideoPlayer::JSFUNC_setVolume(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void 				setVolume(int volume) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->setVolume(__JSVal_TO_int(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_stop(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void 				stop() */
			p->stop();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSVideoPlayer::JSFUNC_update(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSVideoPlayer *p = (ofxJSVideoPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void				update() */
			p->update();
			return JS_TRUE;
	}


	return JS_FALSE;
}


