/*
 *  ofxJSSoundPlayer.h
 *  liveCoding
 *
 *  Created by Julien Gachadoat on 26/11/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#ifndef OFX_JSSOUNDPLAYER_H
#define OFX_JSSOUNDPLAYER_H

#include "ofxJavascript.h"
#include "ofxJSUtils.h"
#include "ofSoundPlayer.h"

class ofxJSSoundPlayer
{
	public:

		/* javascript constructors */
		ofxJSSoundPlayer		();
		/* end */
		~ofxJSSoundPlayer		();

		ofSoundPlayer			m_soundPlayer;

		static void				initialize		();
		static void				finalize		();


		/* javascript functions */
		void loadSound(string fileName, bool stream = false);
		void unloadSound();
		void play();
		void stop();

		void setVolume(float vol);
		void setPan(float pan);
		void setSpeed(float spd);
		void setPaused(bool paused);
		void setLoop(bool bLp);
		void setMultiPlay(bool bMp);
		void setPosition(float pct);

		float getPosition();
		bool getIsPlaying();
		float getSpeed();
		float getPan();
		/* end */

		#include "js/ofxJSSoundPlayer.h"
};

#endif