/*
 *  ofxJSOscMessage.h
 *  liveCoding
 *
 *  Created by Julien Gachadoat on 17/12/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#ifndef OFX_JS_OSCMESSAGE_H
#define OFX_JS_OSCMESSAGE_H

#include "ofxJavascript.h"
#include "ofxOscMessage.h"

class ofxJSOscMessage
{

	public:	
		ofxJSOscMessage				();
		~ofxJSOscMessage			();

		ofxOscMessage				m_oscMessage;
		static string				sm_jsOSCConstants;
		static void					initialize		();
		static void					finalize		();

		/* javascript functions */
		void clear();
		string getAddress();
		string getRemoteIp();
		int getRemotePort();
		int getNumArgs();
		int getArgType(int index);
		string getArgTypeName(int index);
		int getArgAsInt(int index);
		float getArgAsFloat(int index);
		string getArgAsString(int index);
		void setAddress(string _address);
		void setRemoteEndpoint(string host,int port);
		void addIntArg(int argument);
		void addFloatArg(float argument);
		void addStringArg(string argument);
		/* end */
		
		#include "js/ofxJSOscMessage.h"
};



#endif