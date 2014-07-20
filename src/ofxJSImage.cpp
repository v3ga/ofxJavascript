/*
 *  ofxJSImage.cpp
 *  openFrameworks
 *
 *  Created by Julien Gachadoat on 07/08/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#include "ofxJSImage.h"
#include "js/ofxJSImage.cpp"

//--------------------------------------------------------------
ofxJSImage::ofxJSImage()
{
}

//--------------------------------------------------------------
ofxJSImage::~ofxJSImage()
{
}

//--------------------------------------------------------------
void ofxJSImage::initialize()
{
	ofxJSImage::JSInit	(ofxJSGetContext(), ofxJSGetGlobalObj());
}

//--------------------------------------------------------------
void ofxJSImage::finalize()
{
}

//--------------------------------------------------------------
void ofxJSImage::allocate(int w, int h, int type)
{
//	m_image.allocate(w,h,type);
}

//--------------------------------------------------------------
void ofxJSImage::clear()
{
	m_image.clear();
}

//--------------------------------------------------------------
void ofxJSImage::setUseTexture(bool bUse)
{
	m_image.setUseTexture(bUse);
}


//--------------------------------------------------------------
bool ofxJSImage::loadImage(string fileName)
{
	return m_image.loadImage(fileName);
}

//--------------------------------------------------------------
void ofxJSImage::saveImage(string fileName)
{
	m_image.saveImage(fileName);
}

//--------------------------------------------------------------
void ofxJSImage::setImageType(int type)
{
//	m_image.setImageType(type);
}

//--------------------------------------------------------------
void ofxJSImage::resize(int newWidth, int newHeight)
{
	m_image.resize(newWidth,newHeight);
}

//--------------------------------------------------------------
void ofxJSImage::grabScreen(int x, int y, int w, int h)
{
	m_image.grabScreen(x,y,w,h);
}

//--------------------------------------------------------------
void ofxJSImage::setAnchorPercent(float xPct, float yPct)
{
	m_image.setAnchorPercent(xPct,yPct);
}

//--------------------------------------------------------------
void ofxJSImage::setAnchorPoint(int x, int y)
{
	m_image.setAnchorPoint(x,y);
}

//--------------------------------------------------------------
void ofxJSImage::resetAnchor()
{
	m_image.resetAnchor();
}

//--------------------------------------------------------------
int	ofxJSImage::getPixelAt(int x, int y)
{
	int offset = x + m_image.width*y;
	if (offset < m_image.width*m_image.height)
	{
		unsigned char* pixels = m_image.getPixels();
		return pixels[offset];
	}
	return 0;
}


//--------------------------------------------------------------
void ofxJSImage::draw(float x, float y, float w, float h)
{
	m_image.draw(x,y,w,h);
}

//--------------------------------------------------------------
void ofxJSImage::draw(float x, float y)
{
	m_image.draw(x,y);
}

//--------------------------------------------------------------
void ofxJSImage::setWidth(int newWidth)
{
	m_image.resize(newWidth, getHeight());
}

//--------------------------------------------------------------

int ofxJSImage::getWidth()
{
	return m_image.width;
}

//--------------------------------------------------------------
void ofxJSImage::setHeight(int newHeight)
{
	m_image.resize(getWidth(), newHeight);
}

//--------------------------------------------------------------


int ofxJSImage::getHeight()
{
	return m_image.height;
}

//--------------------------------------------------------------
void ofxJSImage::setType(int newType)
{
	// do nothing
}

int ofxJSImage::getType()
{
	return m_image.type;
}

//--------------------------------------------------------------
void ofxJSImage::setBpp(int newBpp)
{
	// do nothing
}

int ofxJSImage::getBpp()
{
	return m_image.bpp;
}


