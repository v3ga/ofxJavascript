/*
 *  ofxJSImage.h
 *  openFrameworks
 *
 *  Created by Julien Gachadoat on 07/08/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#ifndef OFX_JSIMAGE_H
#define OFX_JSIMAGE_H


#include "ofxJavascript.h"

class ofxJSImage
{
	public : 
		/* javascript constructors */
		ofxJSImage			();
		/* end */

		~ofxJSImage			();
	
		static void		initialize();
		static void		finalize();

		ofImage				m_image;

		/* javascript functions */
		void 				allocate(int w, int h, int type);
		void 				clear();

		void 				setUseTexture(bool bUse);
		
		bool 				loadImage(string fileName);
		void 				saveImage(string fileName);

		void 				setImageType(int type);
		void 				resize(int newWidth, int newHeight);
		void 				grabScreen(int x, int y, int w, int h);
        void				setAnchorPercent(float xPct, float yPct);
        void				setAnchorPoint(int x, int y);
        void				resetAnchor();
		int					getPixelAt(int x, int y);

		void 				draw(float x, float y, float w, float h);
		void 				draw(float x, float y);

		/* end */

		/* javascript variables
		int 				width;
		int					height;
		int					bpp;
		int					type;
		*/

		#include "js/ofxJSImage.h"

};

#endif

/*
Lacks following api functions : 
		ofTexture*			getTexture();
		unsigned char * 	getPixels();			// up to you to get this right

		void 				setFromPixels(unsigned char * pixels, int w, int h, int newType, bool bOrderIsRGB = true);
		void				update();
	
*/
