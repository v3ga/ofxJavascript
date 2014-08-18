/*
 *  ofxJSGlobalFunc.cpp
 *  openFrameworks
 *
 *  Created by Julien Gachadoat on 05/08/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#include "ofxJSGlobalFunc.h"
#include "ofGraphics.h"
#include "ofBitmapFont.h"
#include "ofxJSOfConstants.cpp"
#include "js/ofxJSGlobalFunc.cpp"

//--------------------------------------------------------------
ofxJSGlobalFunc* ofxJSGlobalFunc::smp_instance = 0;

//--------------------------------------------------------------
ofxJSGlobalFunc* ofxJSGlobalFunc::instance()
{
	return smp_instance;
}

//--------------------------------------------------------------
void ofxJSGlobalFunc::initialize()
{
	if (smp_instance == 0)
	{
		ofxJSGlobalFunc::JSInit	(ofxJSGetContext(), ofxJSGetGlobalObj());

		// Create cpp instance
		smp_instance				= new ofxJSGlobalFunc();
		JSObject* jsInstance		= smp_instance->getJSObject(ofxJSGetContext());

		// Create js mirror instance
		if (JS_TRUE == JS_DefineProperty(ofxJSGetContext(), ofxJSGetGlobalObj(), "of", OBJECT_TO_JSVAL(jsInstance), NULL, NULL, JSPROP_ENUMERATE))
			ofLog(OF_LOG_VERBOSE, "- defining 'of' on globals object");

		// Define some useful properties
		jsval rval;
		uintN lineno=0;
		if (JS_EvaluateScript(ofxJSGetContext(), ofxJSGetGlobalObj() , sm_jsOfConstants.c_str(), (uintN)sm_jsOfConstants.length(), "", lineno, &rval))
		{
			ofLog(OF_LOG_VERBOSE, "- defining 'of' constants");
		}
	}
}


//--------------------------------------------------------------
void ofxJSGlobalFunc::finalize()
{
	delete smp_instance;
}

//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_2_RETURN(float,ofxJSGlobalFunc,Random,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(float,ofxJSGlobalFunc,Randomf)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(float,ofxJSGlobalFunc,Randomuf)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(float,ofxJSGlobalFunc,RandomWidth)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(float,ofxJSGlobalFunc,RandomHeight)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_3_RETURN(float,ofxJSGlobalFunc,Normalize,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_5_RETURN(float,ofxJSGlobalFunc,Map,float,float,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_3_RETURN(float,ofxJSGlobalFunc,Clamp,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_3_RETURN(float,ofxJSGlobalFunc,Lerp,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_4_RETURN(float,ofxJSGlobalFunc,Dist,float,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_4_RETURN(float,ofxJSGlobalFunc,DistSquared,float,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1_RETURN(int,ofxJSGlobalFunc,Sign,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_3_RETURN(bool,ofxJSGlobalFunc,InRange,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1_RETURN(float,ofxJSGlobalFunc,RadToDeg,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1_RETURN(float,ofxJSGlobalFunc,DegToRad,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,NoFill)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,Fill)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,SetLineWidth,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,SetBackgroundAuto,bool)
//--------------------------------------------------------------
//OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,SetRectMode,int)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_3(ofxJSGlobalFunc,Background,float,float,float);
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_6(ofxJSGlobalFunc,Triangle,float,float,float,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_3(ofxJSGlobalFunc,Circle,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_4(ofxJSGlobalFunc,Ellipse,float,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_4(ofxJSGlobalFunc,Line,float,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_4(ofxJSGlobalFunc,Rect,float,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,SetCircleResolution,int)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,SetColor,int)
OFX_DEFINE_JSFUNC_3(ofxJSGlobalFunc,SetColor,int,int,int)
OFX_DEFINE_JSFUNC_4(ofxJSGlobalFunc,SetColor,int,int,int,int)
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,SetHexColor,int)
//--------------------------------------------------------------
void ofxJSGlobalFunc::Curve(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3)
{
	ofCurve(x0,y0,x1,y1,x2,y2,x3,y3);
}
//--------------------------------------------------------------
void ofxJSGlobalFunc::Bezier(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3)
{
	ofBezier(x0,y0,x1,y1,x2,y2,x3,y3);
}

//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,BeginShape)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,EndShape)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_2(ofxJSGlobalFunc,Vertex,float,float)
/*
 void ofxJSGlobalFunc::Vertex(float x, float y)
 {
    ofVertex(x,y);
 }
 */

//--------------------------------------------------------------
void ofxJSGlobalFunc::BackgroundGradient(float r1, float g1, float b1, float r2, float g2, float b2, int mode)
{
    ofColor colorOne(r1,g1,b1);
    ofColor colorTwo(r2,g2,b2);
    
	ofBackgroundGradient(colorOne, colorTwo, (ofGradientMode)mode);
}

//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,EnableAlphaBlending)
//--------------------------------------------------------------

OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,DisableAlphaBlending)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,EnableSmoothing)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,DisableSmoothing)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,PushMatrix)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,PopMatrix)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_3(ofxJSGlobalFunc,Translate,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_3(ofxJSGlobalFunc,Scale,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_4(ofxJSGlobalFunc,Rotate,float,float,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,RotateX,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,RotateY,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,RotateZ,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,Rotate,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,ResetElapsedTimeCounter)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(float,ofxJSGlobalFunc,GetElapsedTimef)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(int,ofxJSGlobalFunc,GetElapsedTimeMillis)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(int,ofxJSGlobalFunc,GetFrameNum)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(int,ofxJSGlobalFunc,GetSeconds)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(int,ofxJSGlobalFunc,GetMinutes)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(int,ofxJSGlobalFunc,GetHours)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(float,ofxJSGlobalFunc,GetFrameRate)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,SetFrameRate,int)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,SleepMillis,int)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,EnableDataPath)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,DisableDataPath)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_2_RETURN(string,ofxJSGlobalFunc,ToDataPath,string,bool)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(int,ofxJSGlobalFunc,GetWindowPositionX)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(int,ofxJSGlobalFunc,GetWindowPositionY)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(int,ofxJSGlobalFunc,GetScreenWidth)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(int,ofxJSGlobalFunc,GetScreenHeight)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(int,ofxJSGlobalFunc,GetWindowMode)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(int,ofxJSGlobalFunc,GetWidth)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0_RETURN(int,ofxJSGlobalFunc,GetHeight)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_2(ofxJSGlobalFunc,SetWindowPosition,int,int)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_2(ofxJSGlobalFunc,SetWindowShape,int,int)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,SetWindowTitle,string)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,EnableSetupScreen)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,DisableSetupScreen)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,SetFullscreen,bool)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,ToggleFullscreen)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,SetVerticalSync,bool)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,HideCursor)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,ShowCursor)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_3(ofxJSGlobalFunc,DrawBitmapString,string,float,float)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_1(ofxJSGlobalFunc,SaveScreen,string)
//--------------------------------------------------------------
OFX_DEFINE_JSFUNC_0(ofxJSGlobalFunc,SaveFrame)
