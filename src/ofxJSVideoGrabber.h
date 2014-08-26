/*
 *  ofxJSVideoGrabber.h
 *  liveCoding
 *
 *  Created by Julien Gachadoat on 26/11/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#ifndef OFX_JSVIDEOGRABBER_H
#define OFX_JSVIDEOGRABBER_H

#include "ofxJavascript.h"
#include "ofxJSUtils.h"
#include "ofVideoGrabber.h"

class ofxJSVideoGrabber
{
	public:

		/* javascript constructors */
		ofxJSVideoGrabber		();
		/* end */

		~ofxJSVideoGrabber		();

		ofVideoGrabber			m_videoGrabber;

		static void				initialize		();
		static void				finalize		();

		/* javascript functions */

		bool 			isFrameNew();
		void			close();
		bool			initGrabber(int w, int h);
		void			videoSettings();
		void 			setVerbose(bool bTalkToMe);
		void			setDeviceID(int _deviceID);
		void 			setUseTexture(bool bUse);

        void 			draw(float x, float y, float w, float h);
		void 			draw(float x, float y);
		void			update();

        void			setAnchorPoint(float x, float y);
   
		/* end */

		/* javascript variables
		int 				width;
		int					height;
		*/

		#include "js/ofxJSVideoGrabber.h"

};

/*
		unsigned char 	* getPixels();
		ofTexture &		getTextureReference();
*/

#endif