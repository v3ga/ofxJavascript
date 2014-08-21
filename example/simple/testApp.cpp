#include "testApp.h"
//--------------------------------------------------------------
void testApp::setup(){	 

	// Initialize JS
	int err = ofxJSInitialize();

	// No error, then load script
	if (err == 0)
	{
		ofxJSScript * pScript = ofxJSLoadFromData("testApp.js", "testApp");	
		if (pScript)
		{
			if (ofxJSEval(pScript))
			{
				ofxJSValue retVal;
				ofxJSCallFunctionNameGlobal_NoArgs("setup",retVal);
			}
		}
	}
}

//--------------------------------------------------------------
void testApp::update(){
	ofxJSValue retVal;
	ofxJSCallFunctionNameGlobal_NoArgs("update", retVal);
}

//--------------------------------------------------------------
void testApp::draw(){
	ofxJSValue retVal;
	ofxJSCallFunctionNameGlobal_NoArgs("draw", retVal);
}

//--------------------------------------------------------------
void testApp::exit()
{
	ofxJSFinalize();
}


//--------------------------------------------------------------
void testApp::keyPressed  (int key){ 

	ofxJSValue retVal;
	ofxJSValue args[1];
	args[0] = int_TO_ofxJSValue(key);
	ofxJSCallFunctionNameGlobal("keyPressed", args,1,retVal);
}

//--------------------------------------------------------------
void testApp::keyReleased  (int key){ 

	ofxJSValue retVal;
	ofxJSValue args[1];
	args[0] = int_TO_ofxJSValue(key);
	ofxJSCallFunctionNameGlobal("keyReleased", args,1,retVal);
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

	ofxJSValue retVal;
	ofxJSValue args[2];
	args[0] = int_TO_ofxJSValue(x);
	args[1] = int_TO_ofxJSValue(y);
	ofxJSCallFunctionNameGlobal("mouseMoved", args,2,retVal);
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	ofxJSValue retVal;
	ofxJSValue args[3];
	args[0] = int_TO_ofxJSValue(x);
	args[1] = int_TO_ofxJSValue(y);
	args[2] = int_TO_ofxJSValue(button);
	ofxJSCallFunctionNameGlobal("mouseDragged", args,3,retVal);

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	ofxJSValue retVal;
	ofxJSValue args[3];
	args[0] = int_TO_ofxJSValue(x);
	args[1] = int_TO_ofxJSValue(y);
	args[2] = int_TO_ofxJSValue(button);
	ofxJSCallFunctionNameGlobal("mousePressed", args,3,retVal);
}

//--------------------------------------------------------------
void testApp::mouseReleased(){
	ofxJSValue retVal;
	ofxJSCallFunctionNameGlobal_NoArgs("mouseReleased",retVal);
}
