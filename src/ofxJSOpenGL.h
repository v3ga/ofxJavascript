/*
 *  ofxJSOpenGL.h
 *  openFrameworks
 *
 *  Created by Julien Gachadoat on 09/08/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#ifndef OFX_JSOPENGL_H
#define OFX_JSOPENGL_H

#include "ofxJavascript.h"
#include "ofxJSUtils.h"
#include <string>

class ofxJSOpenGL
{
	public:
		
		ofxJSOpenGL				();
		~ofxJSOpenGL			();

		static ofxJSOpenGL*		smp_instance;
		static ofxJSOpenGL*		instance();
		static void				initialize		();
		static void				finalize		();
		
		static std::string		sm_jsGLConstants;
		
		/* javascript functions */
		void					Translate(float x,float y,float z); 
		void					Rotate(float angle,float xAxis,float yAxis,float zAxis); 
		void					Scale(float x,float y,float z); 
		void					PushMatrix();
		void					PopMatrix();
		void					LoadIdentity();
		void					Begin(int mode);
		void					End();
		void					Vertex2(float x, float y);
		void					Vertex3(float x, float y, float z);
		void					Color3(float r, float g, float b);
		void					Color4(float r, float g, float b, float a);
		void					Enable(int mode);
		void					Disable(int mode);
		void					BindTexture(int mode, int texName);
		void					TexCoord2(float u, float v);
		void					BlendFunc(int src, int dst);
		/* end */
		#include "js/ofxJSOpenGL.h"
};


#endif