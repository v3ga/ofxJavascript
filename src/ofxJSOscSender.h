/*
 *  ofxJSOscReceiver.h
 *  liveCoding
 *
 *  Created by Julien Gachadoat on 17/12/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#ifndef OFX_JS_OSCSENDER_H
#define OFX_JS_OSCSENDER_H

#include "ofxJavascript.h"
#include "ofxOscSender.h"

// TODO : manage bundle


class ofxJSOscSender
{
	public:
		
		/* javascript constructors */
		ofxJSOscSender			();
		/* end */
		~ofxJSOscSender			();

		ofxOscSender				m_oscSender;

		static void					initialize		();
		static void					finalize		();
		
		/* javascript functions */
		void setup(string hostname,int port);
		void sendMessage(uintN argc, jsval *argv);
		/* end */

		#include "js/ofxJSOscSender.h"
};



#endif