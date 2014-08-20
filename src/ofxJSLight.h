//
//  ofxJSLight.h
//  murmur
//
//  Created by Julien on 20/08/2014.
//
//

#ifndef OFX_JSLIGHT_H
#define OFX_JSLIGHT_H

#include "ofxJavascript.h"

class ofxJSLight
{
	public:
		/* javascript constructors */
		ofxJSLight					();
		/* end */

		~ofxJSLight					();
		
		static void					initialize();
		static void					finalize();
	
	
		/* javascript functions */
		void						destroy			();
		void						enable			();
		void						disable			();

		int							getLightID		();
		/* end */


		ofLight						m_light;
	
		#include "js/ofxJSLight.h"
};

#endif

