/*
 *  ofxJSTrueTypeFont
 *  openFrameworks
 *
 *  Created by Julien Gachadoat on 07/08/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#include "ofxJSTrueTypeFont.h"
#include "js/ofxJSTrueTypeFont.cpp"

//--------------------------------------------------------------
ofxJSTrueTypeFont::ofxJSTrueTypeFont()
{
}

//--------------------------------------------------------------
ofxJSTrueTypeFont::~ofxJSTrueTypeFont()
{
}

//--------------------------------------------------------------
void ofxJSTrueTypeFont::initialize()
{
	ofxJSTrueTypeFont::JSInit	(ofxJSGetContext(), ofxJSGetGlobalObj());
}

//--------------------------------------------------------------
void ofxJSTrueTypeFont::finalize()
{
}

//--------------------------------------------------------------
void ofxJSTrueTypeFont::loadFont(string filename, int fontsize)
{
	m_ttf.loadFont(filename,fontsize);
}

//--------------------------------------------------------------
void ofxJSTrueTypeFont::loadFont(string filename, int fontsize, bool _bAntiAliased, bool _bFullCharacterSet, bool makeContours)
{
	m_ttf.loadFont(filename,fontsize,_bAntiAliased,_bFullCharacterSet,makeContours);
}

//--------------------------------------------------------------
float ofxJSTrueTypeFont::getLineHeight()
{
	return m_ttf.getLineHeight();
}

//--------------------------------------------------------------
void ofxJSTrueTypeFont::setLineHeight(float height)
{
	m_ttf.setLineHeight(height);
}

//--------------------------------------------------------------
float ofxJSTrueTypeFont::stringWidth(string s)
{
	return m_ttf.stringWidth(s);
}

//--------------------------------------------------------------
float ofxJSTrueTypeFont::stringHeight(string s)
{
	return m_ttf.stringHeight(s);
}

//--------------------------------------------------------------
void ofxJSTrueTypeFont::drawString(string s, float x, float y)
{
	m_ttf.drawString(s,x,y);
}

//--------------------------------------------------------------
void ofxJSTrueTypeFont::drawStringAsShapes(string s, float x, float y)
{
	m_ttf.drawStringAsShapes(s,x,y);
}
	
