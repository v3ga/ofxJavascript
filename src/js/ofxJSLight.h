// Generated source file -- DO NOT EDIT
// Javascript code from "ofxJSLight.h"

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

/* Function: void							boom (float amount) */
static JSBool JSFUNC_boom(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);


/* Function: void						destroy			() */
static JSBool JSFUNC_destroy(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void						disable			() */
static JSBool JSFUNC_disable(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void							dolly (float amount) */
static JSBool JSFUNC_dolly(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);


/* Function: void						enable			() */
static JSBool JSFUNC_enable(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int							getLightID		() */
static JSBool JSFUNC_getLightID(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);


/* Function: float							getX		() */
static JSBool JSFUNC_getX(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float							getY		() */
static JSBool JSFUNC_getY(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float							getZ		() */
static JSBool JSFUNC_getZ(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void						move (float x, float y, float z)			() */
static JSBool JSFUNC_move(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);


/* Function: void							pan (float degrees) */
static JSBool JSFUNC_pan(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void							roll (float degrees) */
static JSBool JSFUNC_roll(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void							rotate (float degrees, float vx, float vy, float vz) */
static JSBool JSFUNC_rotate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void							rotateAround (float degrees, float ax, float ay, float az, float cx, float cy, float cz) */
static JSBool JSFUNC_rotateAround(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);


/* Function: int							setAmbientColor		(float r, float g, float b) */
static JSBool JSFUNC_setAmbientColor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void							setGlobalPosition		(float px, float py, float pz) */
static JSBool JSFUNC_setGlobalPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);


/* Function: int							setDiffuseColor		(float r, float g, float b) */
static JSBool JSFUNC_setDiffuseColor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void						setDirectional			() */
static JSBool JSFUNC_setDirectional(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void						setPointLight			() */
static JSBool JSFUNC_setPointLight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void							setSpecularColor		(float r, float g, float b) */
static JSBool JSFUNC_setSpecularColor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void							setSpotlight(float spotCutOff=45.f, float exponent=0.f) */
static JSBool JSFUNC_setSpotlight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void							setPosition(float px, float py, float pz) */
static JSBool JSFUNC_setPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void							setOrientation(float rot_x, float rot_y, float rot_z) */
static JSBool JSFUNC_setOrientation(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void							tilt (float degrees) */
static JSBool JSFUNC_tilt(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);


/* Function: void							truck (float amount) */
static JSBool JSFUNC_truck(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	orbit				(float longitude, float latitude, float radius, float cx, float cy, float cz) */
static JSBool JSFUNC_orbit(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);



