/*
 *  ofxJSOscReceiver.h
 *  liveCoding
 *
 *  Created by Julien Gachadoat on 17/12/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#ifndef OFX_JS_OSCRECEIVER_H
#define OFX_JS_OSCRECEIVER_H

#include "ofxJavascript.h"
#include "ofxOscReceiver.h"

class ofxJSOscReceiver
{
	public:
		
		/* javascript constructors */
		ofxJSOscReceiver			();
		/* end */
		~ofxJSOscReceiver			();

		ofxOscReceiver				m_oscReceiver;

		static void					initialize		();
		static void					finalize		();
		
		/* javascript functions */
		void setup(int listen_port);
		bool hasWaitingMessages();
		JSBool getNextMessage(jsval* retval);
		/* end */

		#include "js/ofxJSOscReceiver.h"
};



#endif