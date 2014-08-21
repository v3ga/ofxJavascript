/*
 *  js.cpp
 *  versatubes
 *
 *  Created by 2Roqs on 04/05/12.
 *  Copyright 2012 2Roqs. All rights reserved.
 *
 */

#include "js.h"

//--------------------------------------------------------------
bool initJS()
{
	ofxJSInitialize();

	// Some functions
	ofxJSDefineFunctionGlobal("ofNoise",						&ofNoise,						3); // name, function pointer, args number
	ofxJSDefineFunctionGlobal("ofPathData",						&ofPathData,					1); // name, function pointer, args number


	// Load a custom js file
	ofxJSScript* pScript = ofxJSLoadFromData("mylib.js", "mylib"); // "mylib" is used for error reporting
	if (pScript){
		bool evalOk = ofxJSEval(pScript);
		if (evalOk){
			printf("Loaded \"mylib.js\"\n");
		}
	}
	
	return true; // TODO err checking
}

//--------------------------------------------------------------
ofxJSDefineFunctionCpp(ofPathData){
	if (argc == 1)
	{
		string path =  ofxJSValue_TO_string(argv[0]);
		string s = ofFilePath::getAbsolutePath(path);

		*retVal = string_TO_ofxJSValue(s);
		return JS_TRUE;
	}
	
	return JS_FALSE;
}

//--------------------------------------------------------------
ofxJSDefineFunctionCpp(ofNoise){
	float val = 0.0f;

	if (argc == 1)
		val = ofNoise( ofxJSValue_TO_float(argv[0]) );
	else
	if (argc == 2)
		val = ofNoise( ofxJSValue_TO_float(argv[0]), ofxJSValue_TO_float(argv[1]) );
	else
	if (argc == 3)
		val = ofNoise( ofxJSValue_TO_float(argv[0]), ofxJSValue_TO_float(argv[1]), ofxJSValue_TO_float(argv[2]) );

	*retVal = float_TO_ofxJSValue(val);
	
	return JS_TRUE;
}





