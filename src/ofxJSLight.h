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
        void                        setAmbientColor ( float r, float g, float b);
        void                        setDiffuseColor ( float r, float g, float b);
        void                        setDirectional  ();
        void                        setPointLight ();
        void                        setSpecularColor ( float r, float g, float b);
        void                        setSpotlight (float spotCutOff=45.f, float exponent=0.f);
		int							getLightID		();

		/* end */


		ofLight						m_light;
	
		#include "js/ofxJSLight.h"
};

#endif

