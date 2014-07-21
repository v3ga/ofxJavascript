// Generated source file -- DO NOT EDIT
// Javascript code from "/Users/Julien/Dev/C/of_preRelease_v0.06_xcode_FAT/addons/ofxJavascript/src/ofxJSGlobalFunc.h"

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
/* Function: void	Background				(float r,float g,float b) */
static JSBool JSFUNC_Background(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	Bezier					(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3) */
static JSBool JSFUNC_Bezier(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	Circle					(float x,float y, float radius) */
static JSBool JSFUNC_Circle(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float	Clamp					(float value, float min, float max) */
static JSBool JSFUNC_Clamp(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	Curve					(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3) */
static JSBool JSFUNC_Curve(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float	DegToRad				(float degrees) */
static JSBool JSFUNC_DegToRad(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	DisableAlphaBlending	() */
static JSBool JSFUNC_DisableAlphaBlending(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	DisableDataPath			() */
static JSBool JSFUNC_DisableDataPath(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	DisableSetupScreen		() */
static JSBool JSFUNC_DisableSetupScreen(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	DisableSmoothing		() */
static JSBool JSFUNC_DisableSmoothing(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float	Dist					(float x1, float y1, float x2, float y2) */
static JSBool JSFUNC_Dist(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float	DistSquared				(float x1, float y1, float x2, float y2) */
static JSBool JSFUNC_DistSquared(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	DrawBitmapString		(string textString, float x, float y) */
static JSBool JSFUNC_DrawBitmapString(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	Ellipse					(float x, float y, float width, float height) */
static JSBool JSFUNC_Ellipse(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	EnableAlphaBlending		() */
static JSBool JSFUNC_EnableAlphaBlending(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	EnableDataPath			() */
static JSBool JSFUNC_EnableDataPath(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	EnableSetupScreen		() */
static JSBool JSFUNC_EnableSetupScreen(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	EnableSmoothing			() */
static JSBool JSFUNC_EnableSmoothing(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	Fill					() */
static JSBool JSFUNC_Fill(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int		GetElapsedTimeMillis	() */
static JSBool JSFUNC_GetElapsedTimeMillis(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float 	GetElapsedTimef			() */
static JSBool JSFUNC_GetElapsedTimef(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int 	GetFrameNum				() */
static JSBool JSFUNC_GetFrameNum(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float 	GetFrameRate			() */
static JSBool JSFUNC_GetFrameRate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int 	GetHeight				() */
static JSBool JSFUNC_GetHeight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int		GetHours				() */
static JSBool JSFUNC_GetHours(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int		GetMinutes				() */
static JSBool JSFUNC_GetMinutes(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int 	GetScreenHeight			() */
static JSBool JSFUNC_GetScreenHeight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int 	GetScreenWidth			() */
static JSBool JSFUNC_GetScreenWidth(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int		GetSeconds				() */
static JSBool JSFUNC_GetSeconds(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int 	GetWidth				() */
static JSBool JSFUNC_GetWidth(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int		GetWindowMode			() */
static JSBool JSFUNC_GetWindowMode(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int		GetWindowPositionX		() */
static JSBool JSFUNC_GetWindowPositionX(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int 	GetWindowPositionY		() */
static JSBool JSFUNC_GetWindowPositionY(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 	HideCursor				() */
static JSBool JSFUNC_HideCursor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: bool	InRange					(float t, float min, float max) */
static JSBool JSFUNC_InRange(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float	Lerp					(float start, float stop, float amt) */
static JSBool JSFUNC_Lerp(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	Line					(float x1,float y1,float x2,float y2) */
static JSBool JSFUNC_Line(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float	Map						(float value, float inputMin, float inputMax, float outputMin, float outputMax) */
static JSBool JSFUNC_Map(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	NoFill					() */
static JSBool JSFUNC_NoFill(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float	Normalize				(float value, float min, float max) */
static JSBool JSFUNC_Normalize(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	PopMatrix				() */
static JSBool JSFUNC_PopMatrix(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	PushMatrix				() */
static JSBool JSFUNC_PushMatrix(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float	RadToDeg				(float radians) */
static JSBool JSFUNC_RadToDeg(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float	Random					(float val0, float val1) */
static JSBool JSFUNC_Random(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float	RandomHeight			() */
static JSBool JSFUNC_RandomHeight(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float	RandomWidth				() */
static JSBool JSFUNC_RandomWidth(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float	Randomf					() */
static JSBool JSFUNC_Randomf(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: float	Randomuf				() */
static JSBool JSFUNC_Randomuf(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	Rect					(float x1,float y1,float w, float h) */
static JSBool JSFUNC_Rect(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	ResetElapsedTimeCounter	() */
static JSBool JSFUNC_ResetElapsedTimeCounter(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	Rotate					(float degrees) */
/* Function: void	Rotate					(float degrees, float vecX, float vecY, float vecZ) */
static JSBool JSFUNC_Rotate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	RotateX					(float degrees) */
static JSBool JSFUNC_RotateX(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	RotateY					(float degrees) */
static JSBool JSFUNC_RotateY(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	RotateZ					(float degrees) */
static JSBool JSFUNC_RotateZ(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	SaveFrame				() */
static JSBool JSFUNC_SaveFrame(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	SaveScreen				(string filename) */
static JSBool JSFUNC_SaveScreen(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	Scale					(float xAmnt, float yAmnt, float zAmnt) */
static JSBool JSFUNC_Scale(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 	SetBackgroundAuto		(bool bManual) */
static JSBool JSFUNC_SetBackgroundAuto(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	SetCircleResolution		(int res) */
static JSBool JSFUNC_SetCircleResolution(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	SetColor				(int hexColor) */
/* Function: void	SetColor				(int r, int g, int b) */
/* Function: void	SetColor				(int r, int g, int b, int a) */
static JSBool JSFUNC_SetColor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

static JSBool JSFUNC_SetHexColor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);


/* Function: void 	SetFrameRate			(int targetRate) */
static JSBool JSFUNC_SetFrameRate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	SetFullscreen			(bool fullscreen) */
static JSBool JSFUNC_SetFullscreen(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	SetLineWidth			(float lineWidth) */
static JSBool JSFUNC_SetLineWidth(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 	SetRectMode				(int mode) */
static JSBool JSFUNC_SetRectMode(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 	SetVerticalSync			(bool bSync) */
static JSBool JSFUNC_SetVerticalSync(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 	SetWindowPosition		(int x, int y) */
static JSBool JSFUNC_SetWindowPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 	SetWindowShape			(int width, int height) */
static JSBool JSFUNC_SetWindowShape(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 	SetWindowTitle			(string title) */
static JSBool JSFUNC_SetWindowTitle(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void 	ShowCursor				() */
static JSBool JSFUNC_ShowCursor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: int		Sign					(float n) */
static JSBool JSFUNC_Sign(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	SleepMillis				(int millis) */
static JSBool JSFUNC_SleepMillis(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: string 	ToDataPath				(string path, bool absolute) */
static JSBool JSFUNC_ToDataPath(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	ToggleFullscreen		() */
static JSBool JSFUNC_ToggleFullscreen(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	Translate				(float x, float y, float z) */
static JSBool JSFUNC_Translate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);

/* Function: void	Triangle				(float x1,float y1,float x2,float y2,float x3, float y3) */
static JSBool JSFUNC_Triangle(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval);


