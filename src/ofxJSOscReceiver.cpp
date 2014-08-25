/*
 *  ofxJSOscReceiver.cpp
 *  liveCoding
 *
 *  Created by Julien Gachadoat on 17/12/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#include "ofxJSOscReceiver.h"
#include "ofxJSOscMessage.h"
#include "js/ofxJSOscReceiver.cpp"

//--------------------------------------------------------------
ofxJSOscReceiver::ofxJSOscReceiver(){
}

//--------------------------------------------------------------
ofxJSOscReceiver::~ofxJSOscReceiver(){
}

//--------------------------------------------------------------
void ofxJSOscReceiver::initialize(){
	ofxJSOscReceiver::JSInit(ofxJSGetContext(), ofxJSGetGlobalObj());
}

//--------------------------------------------------------------
void ofxJSOscReceiver::finalize(){
}

//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSOscReceiver,setup,int,m_oscReceiver)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(bool,ofxJSOscReceiver,hasWaitingMessages,m_oscReceiver)
//--------------------------------------------------------------
JSBool ofxJSOscReceiver::getNextMessage(jsval* retval){
	ofxJSOscMessage* mjs = new ofxJSOscMessage(); // will be garbage collected ...?
	bool is = m_oscReceiver.getNextMessage(&mjs->m_oscMessage);
		*retval = is ? OBJECT_TO_JSVAL(mjs->getJSObject(ofxJSGetContext())) : JSVAL_NULL;
	return JS_TRUE;
}



