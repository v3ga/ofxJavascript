/*
 *  ofxJSUtils.h
 *  openFrameworks
 *
 *  Created by Julien Gachadoat on 04/08/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#ifndef OFX_JSUTILS_H
#define OFX_JSUTILS_H

#include <string>
using namespace std;

// --------------------------------------------------------
// of way of naming
#define ofxJSValue			jsval
#define ofxJSBOOL			JSBool
#define ofxJSObject			JSObject
#define ofxJSContext		JSContext
#define ofxJSCppCallback	JSNative

// --------------------------------------------------------
// Definition of function : 0 args
#define OFX_DEFINE_JSFUNC_0_RETURN(returnType,className,funcName)\
		returnType className::funcName(){return of##funcName();}
#define OFX_DEFINE_JSFUNC_0(className,funcName) OFX_DEFINE_JSFUNC_0_RETURN(void,className,funcName)

// --------------------------------------------------------
// Definition of function : 1 args
#define OFX_DEFINE_JSFUNC_1_RETURN(returnType,className,funcName,typeArg0)\
		returnType className::funcName(typeArg0 a){return of##funcName(a);}
#define OFX_DEFINE_JSFUNC_1(className,funcName,typeArg0) OFX_DEFINE_JSFUNC_1_RETURN(void,className,funcName,typeArg0)

// --------------------------------------------------------
// Definition of function : 2 args
#define OFX_DEFINE_JSFUNC_2_RETURN(returnType,className,funcName,typeArg0,typeArg1)\
		returnType className::funcName(typeArg0 a,typeArg1 b){return of##funcName(a,b);}
#define OFX_DEFINE_JSFUNC_2(className,funcName,typeArg0,typeArg1) OFX_DEFINE_JSFUNC_2_RETURN(void,className,funcName,typeArg0,typeArg1)

// --------------------------------------------------------
// Definition of function : 3 args
#define OFX_DEFINE_JSFUNC_3_RETURN(returnType,className,funcName,typeArg0,typeArg1,typeArg2)\
		returnType className::funcName(typeArg0 a,typeArg1 b,typeArg2 c){return of##funcName(a,b,c);}
#define OFX_DEFINE_JSFUNC_3(className,funcName,typeArg0,typeArg1,typeArg2) OFX_DEFINE_JSFUNC_3_RETURN(void,className,funcName,typeArg0,typeArg1,typeArg2)

// --------------------------------------------------------
// Definition of function : 4 args
#define OFX_DEFINE_JSFUNC_4_RETURN(returnType,className,funcName,typeArg0,typeArg1,typeArg2,typeArg3)\
		returnType className::funcName(typeArg0 a,typeArg1 b,typeArg2 c,typeArg3 d){return of##funcName(a,b,c,d);}
#define OFX_DEFINE_JSFUNC_4(className,funcName,typeArg0,typeArg1,typeArg2,typeArg3) OFX_DEFINE_JSFUNC_4_RETURN(void,className,funcName,typeArg0,typeArg1,typeArg2,typeArg3)

// --------------------------------------------------------
// Definition of function : 5 args
#define OFX_DEFINE_JSFUNC_5_RETURN(returnType,className,funcName,typeArg0,typeArg1,typeArg2,typeArg3,typeArg4)\
		returnType className::funcName(typeArg0 a,typeArg1 b,typeArg2 c,typeArg3 d,typeArg4 e){return of##funcName(a,b,c,d,e);}
#define OFX_DEFINE_JSFUNC_5(className,funcName,typeArg0,typeArg1,typeArg2,typeArg3,typeArg4) OFX_DEFINE_JSFUNC_5_RETURN(void,className,funcName,typeArg0,typeArg1,typeArg2,typeArg3,typeArg4)

// --------------------------------------------------------
// Definition of function : 6 args
#define OFX_DEFINE_JSFUNC_6_RETURN(returnType,className,funcName,typeArg0,typeArg1,typeArg2,typeArg3,typeArg4,typeArg5)\
		returnType className::funcName(typeArg0 a,typeArg1 b,typeArg2 c,typeArg3 d,typeArg4 e,typeArg5 f){return of##funcName(a,b,c,d,e,f);}
#define OFX_DEFINE_JSFUNC_6(className,funcName,typeArg0,typeArg1,typeArg2,typeArg3,typeArg4,typeArg5) OFX_DEFINE_JSFUNC_6_RETURN(void,className,funcName,typeArg0,typeArg1,typeArg2,typeArg3,typeArg4,typeArg5)

// --------------------------------------------------------
// Js <-> C++ values conversion

#define ofxJSValue_IS_int(v)			(JSVAL_IS_INT(v) == JS_TRUE)
#define ofxJSValue_IS_float(v)			(JSVAL_IS_DOUBLE(v) == JS_TRUE)
#define ofxJSValue_IS_double(v)			(JSVAL_IS_DOUBLE(v) == JS_TRUE)
#define ofxJSValue_IS_object(v)			(JSVAL_IS_OBJECT(v) == JS_TRUE)

#define ofxJSValue_TO_int(v)			(JSVAL_IS_DOUBLE(v)?(int)(*(JSVAL_TO_DOUBLE(v))):JSVAL_TO_INT(v))
#define ofxJSValue_TO_bool(v)			JSVAL_TO_BOOLEAN(v)
#define ofxJSValue_TO_double(v)			(JSVAL_IS_INT(v)?JSVAL_TO_INT(v):(double)(*(JSVAL_TO_DOUBLE(v))))
#define ofxJSValue_TO_float(v)			(JSVAL_IS_INT(v)?JSVAL_TO_INT(v):(float)(*(JSVAL_TO_DOUBLE(v))))
#define ofxJSValue_TO_string(v)			string(JS_GetStringBytes(JSVAL_TO_STRING(v)))
#define ofxJSValue_TO_object(t,v)		*((t*)(JS_GetPrivate(ofxJavascript::smp_instance->getContext(),JSVAL_TO_OBJECT(v))))
#define ofxJSValue_TO_objectp(t,v)		((t)(JS_GetPrivate(ofxJavascript::smp_instance->getContext(),JSVAL_TO_OBJECT(v))))

#define int_TO_ofxJSValue(v)			INT_TO_JSVAL(v)
#define bool_TO_ofxJSValue(v)			BOOLEAN_TO_JSVAL(v)
#define double_TO_ofxJSValue(v)			DOUBLE_TO_JSVAL(JS_NewDouble(ofxJavascript::smp_instance->getContext(), v))
#define float_TO_ofxJSValue(v)			DOUBLE_TO_JSVAL(JS_NewDouble(ofxJavascript::smp_instance->getContext(), v))
#define string_TO_ofxJSValue(v)			STRING_TO_JSVAL(JS_NewStringCopyZ(ofxJavascript::smp_instance->getContext(), (v).c_str()))
#define object_TO_ofxJSValue(v)			OBJECT_TO_JSVAL((v).getJSObject(ofxJavascript::smp_instance->getContext()))
#define objectp_TO_ofxJSValue(v)		OBJECT_TO_JSVAL((v)->getJSObject(ofxJavascript::smp_instance->getContext()))

// --------------------------------------------------------
#define ofxJSObject_IS_Array(o)			(JS_IsArrayObject(ofxJavascript::smp_instance->getContext(), o) == JS_TRUE)
#define ofxJSArrayLength(o,l)			(JS_GetArrayLength(ofxJavascript::smp_instance->getContext(), o, &l) == JS_TRUE)
#define ofxJSObject_GET_property(o,p,r)	(JS_GetProperty(ofxJavascript::smp_instance->getContext(), o, p, &r) == JS_TRUE)


// --------------------------------------------------------
// Calling JS functions from C++
#define ofxJSCallFunctionNameObject(obj,funcName,args,argsNb,retVal)\
		if(JS_FALSE == JS_CallFunctionName(ofxJavascript::smp_instance->getContext(), obj,funcName, argsNb, args, &retVal))\
			ofLog(OF_LOG_ERROR,"Error calling the function '%s'", funcName);

#define ofxJSCallFunctionNameObject_NoArgs(obj,funcName,retVal)\
		ofxJSCallFunctionNameObject(funcName,0,0,retVal);

#define ofxJSCallFunctionNameGlobal(funcName,args,argsNb,retVal)\
		ofxJSCallFunctionNameObject(ofxJavascript::smp_instance->getGlobalObj(),funcName,args,argsNb,retVal)

#define ofxJSCallFunctionNameGlobal_NoArgs(funcName,retVal)\
		ofxJSCallFunctionNameGlobal(funcName,0,0,retVal);


#define ofxJSCallFunctionNameObject_IfExists(obj,funcName,args,argsNb,retVal){\
		JSBool found = JS_FALSE;\
		if (JS_HasProperty(ofxJavascript::smp_instance->getContext(), obj, funcName, &found)){\
			if (found){ofxJSCallFunctionNameObject(obj,funcName,args,argsNb,retVal);}\
		}}

#define ofxJSCallFunctionNameObject_NoArgs_IfExists(obj,funcName,retVal)\
		ofxJSCallFunctionNameObject_IfExists(obj,funcName,0,0,retVal)
		
#define ofxJSCallFunctionNameGlobal_NoArgs_IfExists(funcName,retVal)\
		ofxJSCallFunctionNameObject_IfExists(ofxJavascript::smp_instance->getGlobalObj(),funcName,0,0,retVal)

#define ofxJSCallFunctionNameGlobal_IfExists(funcName,args,argsNb,retVal)\
		ofxJSCallFunctionNameObject_IfExists(ofxJavascript::smp_instance->getGlobalObj(),funcName,args,argsNb,retVal)
		
		
// --------------------------------------------------------
// Creating C++ functions exposed to JS		
// Declaration + definition
#define ofxJSDeclareFunctionCpp(funcName)\
		extern ofxJSBOOL funcName(ofxJSContext* cx, ofxJSObject* obj, uintN argc, ofxJSValue* argv, ofxJSValue* retVal)
#define ofxJSDefineFunctionCpp(funcName)\
		ofxJSBOOL funcName(ofxJSContext* cx, ofxJSObject* obj, uintN argc, ofxJSValue* argv, ofxJSValue* retVal)

#define ofxJSDefineFunctionObject(obj,funcName,cppCallback,argsNb)\
		if (JS_FALSE == JS_DefineFunction(ofxJavascript::smp_instance->getContext(),obj,funcName,cppCallback,argsNb,0))\
			ofLog(OF_LOG_ERROR,"Error defining the function '%s'", funcName);

#define ofxJSDefineFunctionGlobal(funcName,cppCallback,argsNb)\
		ofxJSDefineFunctionObject(ofxJavascript::smp_instance->getGlobalObj(),funcName,cppCallback,argsNb);

// --------------------------------------------------------
class ofxJSUtils
{
	public:
		static	bool		readFileIntoString		(string pathAbsolute, string& strResult);
		static	string		findContainingFolder	(string pathFile);
};

#endif //OFX_JSUTILS_H

