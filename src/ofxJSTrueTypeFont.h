/*
 *  ofxJSTrueTypeFont.h
 *  openFrameworks
 *
 *  Created by Julien Gachadoat on 07/08/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */
#ifndef OFX_JSTRUETYPEFONT_H
#define OFX_JSTRUETYPEFONT_H


#include "ofxJavascript.h"

class ofxJSTrueTypeFont
{
	public:
		/* javascript constructors */
		ofxJSTrueTypeFont		();
		/* end */

		~ofxJSTrueTypeFont		();
		
		static void		initialize();
		static void		finalize();
		
		ofTrueTypeFont				m_ttf;
		
		/* javascript functions */
		void						loadFont			(string filename, int fontsize);
		void						loadFont			(string filename, int fontsize, bool _bAntiAliased, bool _bFullCharacterSet, bool makeContours);

		float						getLineHeight		();
		void						setLineHeight		(float height);
		float						stringWidth			(string s);
		float						stringHeight		(string s);

		void						drawString			(string s, float x, float y);
		void						drawStringAsShapes	(string s, float x, float y);
		/* end */
		
	#include "js/ofxJSTrueTypeFont.h"
};

#endif

