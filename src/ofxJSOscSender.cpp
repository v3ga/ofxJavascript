/*
 *  ofxJSOscSender.cpp
 *  liveCoding
 *
 *  Created by Julien Gachadoat on 17/12/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#include "ofxJSOscSender.h"
#include "ofxJSOscMessage.h"
#include "js/ofxJSOscSender.cpp"

//--------------------------------------------------------------
ofxJSOscSender::ofxJSOscSender(){
}

//--------------------------------------------------------------
ofxJSOscSender::~ofxJSOscSender(){
}

//--------------------------------------------------------------
void ofxJSOscSender::initialize(){
	ofxJSOscSender::JSInit(ofxJSGetContext(), ofxJSGetGlobalObj());
}

//--------------------------------------------------------------
void ofxJSOscSender::finalize(){
}

//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_2(ofxJSOscSender,setup,string,int,m_oscSender)

//--------------------------------------------------------------
void ofxJSOscSender::sendMessage(uintN argc, jsval *argv)
{
	if (argc==1){
/*		JSContext *cx = ofxJSGetContext();
		JSObject *obj = JSVAL_TO_OBJECT(*argv);
		if (JS_TRUE == JS_InstanceOf(cx,obj, &ofxJSOscMessage::_jsClass, NULL)){
			ofxJSOscMessage* pMessage = ofxJSValue_TO_objectp(ofxJSOscMessage,*argv);
			if (pMessage)
				m_oscSender.sendMessage(pMessage->m_oscMessage);

		}
*/	}
	
}