/*
 *  ofxJSOscMessage.cpp
 *  liveCoding
 *
 *  Created by Julien Gachadoat on 17/12/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#include "ofxJSOscMessage.h"
#include "js/ofxJSOscMessage.cpp"

//--------------------------------------------------------------
string ofxJSOscMessage::sm_jsOSCConstants;
//--------------------------------------------------------------
ofxJSOscMessage::ofxJSOscMessage(){
}

//--------------------------------------------------------------
ofxJSOscMessage::~ofxJSOscMessage(){
}

//--------------------------------------------------------------
void ofxJSOscMessage::initialize(){
	ofxJSOscMessage::JSInit(ofxJSGetContext(), ofxJSGetGlobalObj());
	ofxJSOscMessage::sm_jsOSCConstants="";
}

//--------------------------------------------------------------
void ofxJSOscMessage::finalize(){
}


//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSOscMessage,clear,m_oscMessage)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(string,ofxJSOscMessage,getAddress,m_oscMessage)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(string,ofxJSOscMessage,getRemoteIp,m_oscMessage)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(int,ofxJSOscMessage,getRemotePort,m_oscMessage)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(int,ofxJSOscMessage,getNumArgs,m_oscMessage)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1_RETURN(int,ofxJSOscMessage,getArgType,int,m_oscMessage)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1_RETURN(string,ofxJSOscMessage,getArgTypeName,int,m_oscMessage)
//--------------------------------------------------------------
int ofxJSOscMessage::getArgAsInt(int index){
	int32_t n = m_oscMessage.getArgAsInt32(index);
	return (int)n;
}
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1_RETURN(float,ofxJSOscMessage,getArgAsFloat,int,m_oscMessage)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1_RETURN(string,ofxJSOscMessage,getArgAsString,int,m_oscMessage)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSOscMessage,setAddress,string,m_oscMessage)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_2(ofxJSOscMessage,setRemoteEndpoint,string,int,m_oscMessage)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSOscMessage,addIntArg,int,m_oscMessage)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSOscMessage,addFloatArg,float,m_oscMessage)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSOscMessage,addStringArg,string,m_oscMessage)
