/*
 *  ofxJSVideoGrabber.cpp
 *  liveCoding
 *
 *  Created by Julien Gachadoat on 26/11/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#include "ofxJSVideoGrabber.h"
#include "js/ofxJSVideoGrabber.cpp"
//--------------------------------------------------------------
ofxJSVideoGrabber::ofxJSVideoGrabber()
{
}

//--------------------------------------------------------------
ofxJSVideoGrabber::~ofxJSVideoGrabber()
{
}

//--------------------------------------------------------------
void ofxJSVideoGrabber::initialize()
{
	ofxJSVideoGrabber::JSInit(ofxJSGetContext(), ofxJSGetGlobalObj());
}

//--------------------------------------------------------------
void ofxJSVideoGrabber::finalize()
{
}

//--------------------------------------------------------------
void ofxJSVideoGrabber::setWidth(int w){}
int ofxJSVideoGrabber::getWidth(){return (int)m_videoGrabber.getWidth();}
void ofxJSVideoGrabber::setHeight(int h){}
int ofxJSVideoGrabber::getHeight(){return (int)m_videoGrabber.getHeight();}
//--------------------------------------------------------------

//--------------------------------------------------------------
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(bool,ofxJSVideoGrabber,isFrameNew,m_videoGrabber)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSVideoGrabber,close,m_videoGrabber)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_2_RETURN(bool,ofxJSVideoGrabber,initGrabber,int,int,m_videoGrabber)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSVideoGrabber,videoSettings,m_videoGrabber)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSVideoGrabber,setVerbose,bool,m_videoGrabber)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSVideoGrabber,setDeviceID,int,m_videoGrabber)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSVideoGrabber,setUseTexture,bool,m_videoGrabber)
//--------------------------------------------------------------

OFX_INST_DEFINE_JSFUNC_4(ofxJSVideoGrabber,draw,float,float,float,float,m_videoGrabber)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_2(ofxJSVideoGrabber,draw,float,float,m_videoGrabber)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSVideoGrabber,update,m_videoGrabber)

//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_2(ofxJSVideoGrabber,setAnchorPoint,float,float,m_videoGrabber)

