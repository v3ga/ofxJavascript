// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSImage.h"

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
	JSVAR_width,
	JSVAR_height,
	JSVAR_bpp,
	JSVAR_type,
	JSVAR_LASTENUM
};

///// JavaScript Variable Definitions
int getWidth();
void setWidth(int width);

int getHeight();
void setHeight(int height);

int getBpp();
void setBpp(int bpp);

int getType();
void setType(int type);


static JSPropertySpec _JSPropertySpec[];

static JSBool JSGetProperty(JSContext *cx, JSObject *obj, jsval id, jsval *vp);

static JSBool JSSetProperty(JSContext *cx, JSObject *obj, jsval id, jsval *vp);

static JSFunctionSpec _JSFunctionSpec[];

///// JavaScript Function Wrapper Prototypes
/* Function: void 				allocate(int w, int h, int type) */
static JSBool JSFUNC_allocate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 				clear() */
static JSBool JSFUNC_clear(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 				draw(float x, float y) */
/* Function: void 				draw(float x, float y, float w, float h) */
static JSBool JSFUNC_draw(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int					getPixelAt(int x, int y) */
static JSBool JSFUNC_getPixelAt(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 				grabScreen(int x, int y, int w, int h) */
static JSBool JSFUNC_grabScreen(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: bool 				loadImage(string fileName) */
static JSBool JSFUNC_loadImage(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void				resetAnchor() */
static JSBool JSFUNC_resetAnchor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 				resize(int newWidth, int newHeight) */
static JSBool JSFUNC_resize(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 				saveImage(string fileName) */
static JSBool JSFUNC_saveImage(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void				setAnchorPercent(float xPct, float yPct) */
static JSBool JSFUNC_setAnchorPercent(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void				setAnchorPoint(int x, int y) */
static JSBool JSFUNC_setAnchorPoint(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 				setImageType(int type) */
static JSBool JSFUNC_setImageType(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 				setUseTexture(bool bUse) */
static JSBool JSFUNC_setUseTexture(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);


