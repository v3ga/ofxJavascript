/*
 *  ofxJSSoundPlayer.cpp
 *  liveCoding
 *
 *  Created by Julien Gachadoat on 26/11/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#include "ofxJSSoundPlayer.h"
#include "js/ofxJSSoundPlayer.cpp"

//--------------------------------------------------------------
ofxJSSoundPlayer::ofxJSSoundPlayer()
{
}

//--------------------------------------------------------------
ofxJSSoundPlayer::~ofxJSSoundPlayer()
{
}

//--------------------------------------------------------------
void ofxJSSoundPlayer::initialize()
{
	ofxJSSoundPlayer::JSInit(ofxJSGetContext(), ofxJSGetGlobalObj());
}

//--------------------------------------------------------------
void ofxJSSoundPlayer::finalize()
{
}

//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_2(ofxJSSoundPlayer,loadSound,string,bool,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSSoundPlayer,unloadSound,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSSoundPlayer,play,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0(ofxJSSoundPlayer,stop,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSSoundPlayer,setVolume,float,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSSoundPlayer,setPan,float,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSSoundPlayer,setSpeed,float,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSSoundPlayer,setPaused,bool,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSSoundPlayer,setLoop,bool,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSSoundPlayer,setMultiPlay,bool,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_1(ofxJSSoundPlayer,setPosition,float,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(float,ofxJSSoundPlayer,getPosition,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(bool,ofxJSSoundPlayer,getIsPlaying,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(float,ofxJSSoundPlayer,getSpeed,m_soundPlayer)
//--------------------------------------------------------------
OFX_INST_DEFINE_JSFUNC_0_RETURN(float,ofxJSSoundPlayer,getPan,m_soundPlayer)