// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSSoundPlayer.h"


///// JavaScript Class Definition
JSClass ofxJSSoundPlayer::_jsClass = {
	"ofxJSSoundPlayer", JSCLASS_HAS_PRIVATE,
	JS_PropertyStub, JS_PropertyStub,
	JS_PropertyStub, JS_PropertyStub,
	JS_EnumerateStub, JS_ResolveStub,
	JS_ConvertStub, ofxJSSoundPlayer::JSDestructor,
	0, 0, 0, 0, 
	0, 0, 0, 0
};

///// JavaScript Initialization Method
JSObject *ofxJSSoundPlayer::JSInit(JSContext *cx, JSObject *obj) {
	if (obj==NULL)
		obj = JS_GetGlobalObject(cx);
	jsval oldobj;
	if (JS_TRUE == JS_LookupProperty(cx, obj, ofxJSSoundPlayer::_jsClass.name, &oldobj) && JSVAL_IS_OBJECT(oldobj))
		return JSVAL_TO_OBJECT(oldobj);
	return JS_InitClass(cx, obj, NULL, &ofxJSSoundPlayer::_jsClass,
    	                                 ofxJSSoundPlayer::JSConstructor, 0,
    	                                 NULL, ofxJSSoundPlayer::_JSFunctionSpec,
    	                                 NULL, NULL);
}

///// JavaScript Constructor
JSBool ofxJSSoundPlayer::JSConstructor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = NULL;
	if (argc == 0) {
		/* Constructor: ofxJSSoundPlayer		() */
			p = new ofxJSSoundPlayer;
	}


	if (!p || !JS_SetPrivate(cx, obj, p)) return JS_FALSE;
	p->_JSinternal.o = obj;
	*rval = OBJECT_TO_JSVAL(obj);
	return JS_TRUE;
}

///// JavaScript Destructor
void ofxJSSoundPlayer::JSDestructor(JSContext *cx, JSObject *obj) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (p) delete p;
}

///// JavaScript Object Linking
JSObject *ofxJSSoundPlayer::getJSObject(JSContext *cx) {
	if (!cx) return NULL;
	if (!_JSinternal.o) {
		_JSinternal.o = newJSObject(cx);
		if (!JS_SetPrivate(cx, _JSinternal.o, this)) return NULL;
	}
	return _JSinternal.o;
}

JSObject *ofxJSSoundPlayer::newJSObject(JSContext *cx) {
	return JS_NewObject(cx, &ofxJSSoundPlayer::_jsClass, NULL, NULL);
}

///// JavaScript Function Table
JSFunctionSpec ofxJSSoundPlayer::_JSFunctionSpec[] = {
	{ "getIsPlaying", JSFUNC_getIsPlaying, 0, 0, 0 },
	{ "getPan", JSFUNC_getPan, 0, 0, 0 },
	{ "getPosition", JSFUNC_getPosition, 0, 0, 0 },
	{ "getSpeed", JSFUNC_getSpeed, 0, 0, 0 },
	{ "loadSound", JSFUNC_loadSound, 2, 0, 0 },
	{ "play", JSFUNC_play, 0, 0, 0 },
	{ "setLoop", JSFUNC_setLoop, 1, 0, 0 },
	{ "setMultiPlay", JSFUNC_setMultiPlay, 1, 0, 0 },
	{ "setPan", JSFUNC_setPan, 1, 0, 0 },
	{ "setPaused", JSFUNC_setPaused, 1, 0, 0 },
	{ "setPosition", JSFUNC_setPosition, 1, 0, 0 },
	{ "setSpeed", JSFUNC_setSpeed, 1, 0, 0 },
	{ "setVolume", JSFUNC_setVolume, 1, 0, 0 },
	{ "stop", JSFUNC_stop, 0, 0, 0 },
	{ "unloadSound", JSFUNC_unloadSound, 0, 0, 0 },
	{ 0, 0, 0, 0, 0 }
};

///// JavaScript Function Wrappers
JSBool ofxJSSoundPlayer::JSFUNC_getIsPlaying(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: bool getIsPlaying() */
			*rval = __bool_TO_JSVal(cx,p->getIsPlaying());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_getPan(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float getPan() */
			*rval = __float_TO_JSVal(cx,p->getPan());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_getPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float getPosition() */
			*rval = __float_TO_JSVal(cx,p->getPosition());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_getSpeed(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: float getSpeed() */
			*rval = __float_TO_JSVal(cx,p->getSpeed());
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_loadSound(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 2) return JS_FALSE;
	if (argc == 2) {
		/* Function: void loadSound(string fileName, bool stream = false) */
		if (JSVAL_IS_STRING(argv[0]) && JSVAL_IS_BOOLEAN(argv[1])) {
			p->loadSound(
				__JSVal_TO_string(argv[0]),
				__JSVal_TO_bool(argv[1])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_play(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void play() */
			p->play();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_setLoop(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void setLoop(bool bLp) */
		if (JSVAL_IS_BOOLEAN(argv[0])) {
			p->setLoop(__JSVal_TO_bool(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_setMultiPlay(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void setMultiPlay(bool bMp) */
		if (JSVAL_IS_BOOLEAN(argv[0])) {
			p->setMultiPlay(__JSVal_TO_bool(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_setPan(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void setPan(float vol) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->setPan(__JSVal_TO_float(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_setPaused(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void setPaused(bool bP) */
		if (JSVAL_IS_BOOLEAN(argv[0])) {
			p->setPaused(__JSVal_TO_bool(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_setPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void setPosition(float pct) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->setPosition(__JSVal_TO_float(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_setSpeed(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void setSpeed(float spd) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->setSpeed(__JSVal_TO_float(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_setVolume(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc < 1) return JS_FALSE;
	if (argc == 1) {
		/* Function: void setVolume(float vol) */
		if (JSVAL_IS_NUMBER(argv[0])) {
			p->setVolume(__JSVal_TO_float(argv[0]));
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_stop(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void stop() */
			p->stop();
			return JS_TRUE;
	}


	return JS_FALSE;
}

JSBool ofxJSSoundPlayer::JSFUNC_unloadSound(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSSoundPlayer *p = (ofxJSSoundPlayer*)JS_GetPrivate(cx, obj);
	if (argc == 0) {
		/* Function: void unloadSound() */
			p->unloadSound();
			return JS_TRUE;
	}


	return JS_FALSE;
}


