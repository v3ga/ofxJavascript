// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSOpenGL.h"

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
/* Function: void					Begin(int mode) */
static JSBool JSFUNC_Begin(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					BindTexture(int mode, int texName) */
static JSBool JSFUNC_BindTexture(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					BlendFunc(int src, int dst) */
static JSBool JSFUNC_BlendFunc(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					Color3(float r, float g, float b) */
static JSBool JSFUNC_Color3(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					Color4(float r, float g, float b, float a) */
static JSBool JSFUNC_Color4(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					Disable(int mode) */
static JSBool JSFUNC_Disable(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					Enable(int mode) */
static JSBool JSFUNC_Enable(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					End() */
static JSBool JSFUNC_End(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					LoadIdentity() */
static JSBool JSFUNC_LoadIdentity(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					PopMatrix() */
static JSBool JSFUNC_PopMatrix(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					PushMatrix() */
static JSBool JSFUNC_PushMatrix(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					Rotate(float angle,float xAxis,float yAxis,float zAxis) */
static JSBool JSFUNC_Rotate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					Scale(float x,float y,float z) */
static JSBool JSFUNC_Scale(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					TexCoord2(float u, float v) */
static JSBool JSFUNC_TexCoord2(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					Translate(float x,float y,float z) */
static JSBool JSFUNC_Translate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					Vertex2(float x, float y) */
static JSBool JSFUNC_Vertex2(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void					Vertex3(float x, float y, float z) */
static JSBool JSFUNC_Vertex3(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);


