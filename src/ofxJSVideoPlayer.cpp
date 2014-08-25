/*
 *  ofxJSVideoPlayer.cpp
 *  liveCoding
 *
 *  Created by Julien Gachadoat on 26/11/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#include "ofxJSVideoPlayer.h"
#include "js/ofxJSVideoPlayer.cpp"

//--------------------------------------------------------------
ofxJSVideoPlayer::ofxJSVideoPlayer()
{
}

//--------------------------------------------------------------
ofxJSVideoPlayer::~ofxJSVideoPlayer()
{
}

//--------------------------------------------------------------
void ofxJSVideoPlayer::initialize()
{
	ofxJSVideoPlayer::JSInit(ofxJSGetContext(), ofxJSGetGlobalObj());
}

//--------------------------------------------------------------
void ofxJSVideoPlayer::finalize()
{
}

//--------------------------------------------------------------
void ofxJSVideoPlayer::setWidth(int w){}
int ofxJSVideoPlayer::getWidth(){return (int)m_videoPlayer.getWidth();}
//--------------------------------------------------------------
void ofxJSVideoPlayer::setHeight(int h){}
int ofxJSVideoPlayer::getHeight(){return (int)m_videoPlayer.getHeight();}
//--------------------------------------------------------------
void ofxJSVideoPlayer::setSpeed(float s){m_videoPlayer.setSpeed(s);}
float ofxJSVideoPlayer::getSpeed(){return (int)m_videoPlayer.getSpeed();}
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1_RETURN(bool,ofxJSVideoPlayer,loadMovie,string,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSVideoPlayer,closeMovie,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSVideoPlayer,close,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSVideoPlayer,update,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSVideoPlayer,play,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSVideoPlayer,stop,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(bool,ofxJSVideoPlayer,isFrameNew,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(float,ofxJSVideoPlayer,getPosition,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(float,ofxJSVideoPlayer,getDuration,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(bool,ofxJSVideoPlayer,getIsMovieDone,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSVideoPlayer,setPosition,float,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSVideoPlayer,setVolume,int,m_videoPlayer)
//--------------------------------------------------------------
// OFX_INST_DEFINE_JSFUNC_1(ofxJSVideoPlayer,setLoopState,int,m_videoPlayer)
void ofxJSVideoPlayer::setLoopState(int state)
{
	m_videoPlayer.setLoopState((ofLoopType) state);
}

//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSVideoPlayer,setFrame,int,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSVideoPlayer,setUseTexture,bool,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_4(ofxJSVideoPlayer,draw,float,float,float,float,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_2(ofxJSVideoPlayer,draw,float,float,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_2(ofxJSVideoPlayer,setAnchorPercent,float,float,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_2(ofxJSVideoPlayer,setAnchorPoint,int,int,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSVideoPlayer,resetAnchor,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSVideoPlayer,setPaused,bool,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(int,ofxJSVideoPlayer,getCurrentFrame,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(int,ofxJSVideoPlayer,getTotalNumFrames,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSVideoPlayer,firstFrame,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSVideoPlayer,nextFrame,m_videoPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSVideoPlayer,previousFrame,m_videoPlayer)
