/*
 *  ofxJSVideoPlayer.h
 *  liveCoding
 *
 *  Created by Julien Gachadoat on 26/11/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#ifndef OFX_JSVIDEOPLAYER_H
#define OFX_JSVIDEOPLAYER_H

#include "ofxJavascript.h"
#include "ofxJSUtils.h"
#include "ofVideoPlayer.h"

class ofxJSVideoPlayer
{
	public:

		/* javascript constructors */
		ofxJSVideoPlayer		();
		/* end */
		~ofxJSVideoPlayer		();

		ofVideoPlayer			m_videoPlayer;

		static void				initialize		();
		static void				finalize		();

		/* javascript functions */
		bool 				loadMovie(string name);
		void 				closeMovie();
		void 				close();

		void				update();
		void 				play();
		void 				stop();

		bool 				isFrameNew();
		float 				getPosition();
		float 				getDuration();
		bool				getIsMovieDone();

		void 				setPosition(float pct);
		void 				setVolume(float volume);

		void 				setLoopState(int state);
		void				setFrame(int frame);

		void 				setUseTexture(bool bUse);
		void 				draw(float x, float y, float w, float h);
		void 				draw(float x, float y);

    
        void				setAnchorPoint(float x, float y);
        

		void 				setPaused(bool bPause);

		int					getCurrentFrame();
		int					getTotalNumFrames();

		void				firstFrame();
		void				nextFrame();
		void				previousFrame();

		/* end */

		/* javascript variables
		int 				width;
		int					height;
		float				speed;
		*/


		#include "js/ofxJSVideoPlayer.h"
};

/*
		void   				setSpeed(float speed);
		float 				getSpeed();
		unsigned char * 	getPixels();
		ofTexture &			getTextureReference();
*/
#endif