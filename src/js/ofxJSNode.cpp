// Generated source file -- DO NOT EDIT
// Javascript code from "ofxJSNode.h"


///// JavaScript Class Definition
JSClass ofxJSNode::_jsClass = {
	"ofxJSNode", JSCLASS_HAS_PRIVATE,
	JS_PropertyStub, JS_PropertyStub,
	JS_PropertyStub, JS_PropertyStub,
	JS_EnumerateStub, JS_ResolveStub,
	JS_ConvertStub, ofxJSNode::JSDestructor,
	0, 0, 0, 0, 
	0, 0, 0, 0
};

///// JavaScript Initialization Method
JSObject *ofxJSNode::JSInit(JSContext *cx, JSObject *obj) {
	if (obj==NULL)
		obj = JS_GetGlobalObject(cx);
	jsval oldobj;
	if (JS_TRUE == JS_LookupProperty(cx, obj, ofxJSNode::_jsClass.name, &oldobj) && JSVAL_IS_OBJECT(oldobj))
		return JSVAL_TO_OBJECT(oldobj);
	return JS_InitClass(cx, obj, NULL, &ofxJSNode::_jsClass,
    	                                 ofxJSNode::JSConstructor, 0,
    	                                 NULL, ofxJSNode::_JSFunctionSpec,
    	                                 NULL, NULL);
}

///// JavaScript Constructor
JSBool ofxJSNode::JSConstructor(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSNode *p = NULL;
	if (argc == 0) {
		/* Constructor: ofxJSNode			() */
			p = new ofxJSNode;
	}


	if (!p || !JS_SetPrivate(cx, obj, p)) return JS_FALSE;
	p->_JSinternal.o = obj;
	*rval = OBJECT_TO_JSVAL(obj);
	return JS_TRUE;
}

///// JavaScript Destructor
void ofxJSNode::JSDestructor(JSContext *cx, JSObject *obj) {
	ofxJSNode *p = (ofxJSNode*)JS_GetPrivate(cx, obj);
	if (p) delete p;
}

///// JavaScript Object Linking
JSObject *ofxJSNode::getJSObject(JSContext *cx) {
	if (!cx) return NULL;
	if (!_JSinternal.o) {
		_JSinternal.o = newJSObject(cx);
		if (!JS_SetPrivate(cx, _JSinternal.o, this)) return NULL;
	}
	return _JSinternal.o;
}

JSObject *ofxJSNode::newJSObject(JSContext *cx) {
	return JS_NewObject(cx, &ofxJSNode::_jsClass, NULL, NULL);
}

///// JavaScript Function Table
JSFunctionSpec ofxJSNode::_JSFunctionSpec[] = {
	{ "setPosition", JSFUNC_setPosition, 3, 0, 0 },
	{ 0, 0, 0, 0, 0 }
};

///// JavaScript Function Wrappers
JSBool ofxJSNode::JSFUNC_setPosition(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval) {
	ofxJSNode *p = (ofxJSNode*)JS_GetPrivate(cx, obj);
	if (argc < 3) return JS_FALSE;
	if (argc == 3) {
		/* Function: void				setPosition	(float px, float py, float pz) */
		if (JSVAL_IS_NUMBER(argv[0]) && JSVAL_IS_NUMBER(argv[1]) && JSVAL_IS_NUMBER(argv[2])) {
			p->setPosition(
				__JSVal_TO_float(argv[0]),
				__JSVal_TO_float(argv[1]),
				__JSVal_TO_float(argv[2])
			);
			return JS_TRUE;
		}
	}


	return JS_FALSE;
}


