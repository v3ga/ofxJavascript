// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSSoundPlayer.h"

public:


static JSClass _jsClass;

///// JavaScript Conversion Macros
#ifndef __JSVal_MACROS
#define __JSVal_MACROS

#define JSVAL_IS_JSVAL(v)			(true)

#define __JSVal_TO_int(v)			(JSVAL_IS_DOUBLE(v)?(int)(*(JSVAL_TO_DOUBLE(v))):JSVAL_TO_INT(v))
#define __JSVal_TO_bool(v)			JSVAL_TO_BOOLEAN(v)
#define __JSVal_TO_double(v)		(JSVAL_IS_INT(v)?JSVAL_TO_INT(v):(double)(*(JSVAL_TO_DOUBLE(v))))
#define __JSVal_TO_float(v)			(JSVAL_IS_INT(v)?JSVAL_TO_INT(v):(float)(*(JSVAL_TO_DOUBLE(v))))
#define __JSVal_TO_string(v)		string(JS_GetStringBytes(JSVAL_TO_STRING(v)))
#define __JSVal_TO_object(cx,t,v)	*((t*)(JS_GetPrivate(cx,JSVAL_TO_OBJECT(v))))
#define __JSVal_TO_objectp(cx,t,v)	((t)(JS_GetPrivate(cx,JSVAL_TO_OBJECT(v))))

#define __int_TO_JSVal(cx,v)		INT_TO_JSVAL(v)
#define __bool_TO_JSVal(cx,v)		BOOLEAN_TO_JSVAL(v)
#define __double_TO_JSVal(cx,v)		DOUBLE_TO_JSVAL(JS_NewDouble(cx, v))
#define __float_TO_JSVal(cx,v)		DOUBLE_TO_JSVAL(JS_NewDouble(cx, v))
#define __string_TO_JSVal(cx,v)		STRING_TO_JSVAL(JS_NewStringCopyZ(cx, (v).c_str()))
#define __object_TO_JSVal(cx,v)		OBJECT_TO_JSVAL((v).getJSObject(cx))
#define __objectp_TO_JSVal(cx,v)	OBJECT_TO_JSVAL((v)->getJSObject(cx))

#endif

static JSObject *JSInit(JSContext *cx, JSObject *obj = NULL);

static JSBool JSConstructor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

static void JSDestructor(JSContext *cx, JSObject *obj);

///// JavaScript Object Linking
struct _JSinternalStruct {
	JSObject *o;
	_JSinternalStruct() : o(NULL) {};
	~_JSinternalStruct() { if (o) JS_SetPrivate(NULL,o, NULL); };
};
_JSinternalStruct _JSinternal;
JSObject *getJSObject(JSContext *cx);
static JSObject *newJSObject(JSContext *cx);

///// JavaScript Class Variable IDs
enum {
	JSVAR_LASTENUM
};

static JSFunctionSpec _JSFunctionSpec[];

///// JavaScript Function Wrapper Prototypes
/* Function: bool getIsPlaying() */
static JSBool JSFUNC_getIsPlaying(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float getPan() */
static JSBool JSFUNC_getPan(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float getPosition() */
static JSBool JSFUNC_getPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float getSpeed() */
static JSBool JSFUNC_getSpeed(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: bool loadSound(string fileName, bool stream = false) */
static JSBool JSFUNC_loadSound(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void play() */
static JSBool JSFUNC_play(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void setLoop(bool bLp) */
static JSBool JSFUNC_setLoop(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void setMultiPlay(bool bMp) */
static JSBool JSFUNC_setMultiPlay(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void setPan(float vol) */
static JSBool JSFUNC_setPan(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void setPaused(bool bP) */
static JSBool JSFUNC_setPaused(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void setPosition(float pct) */
static JSBool JSFUNC_setPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void setSpeed(float spd) */
static JSBool JSFUNC_setSpeed(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void setVolume(float vol) */
static JSBool JSFUNC_setVolume(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void stop() */
static JSBool JSFUNC_stop(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void unloadSound() */
static JSBool JSFUNC_unloadSound(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);


