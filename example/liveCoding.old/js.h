/*
 *  js.h
 *  versatubes
 *
 *  Created by 2Roqs on 04/05/12.
 *  Copyright 2012 2Roqs. All rights reserved.
 *
 */

// Examples on how to declare javascript functions that executes on c++ side and return a value to js

#pragma once
#include "ofMain.h"
#include "ofxJavascript.h"

bool initJS();

ofxJSDeclareFunctionCpp(ofNoise);
ofxJSDeclareFunctionCpp(ofPathData);


static char s_jsStringBuffer[2048];
static string s_jsTemp;





