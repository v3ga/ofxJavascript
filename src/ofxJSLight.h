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
        void                        setPointLight   ();
        void                        setSpecularColor ( float r, float g, float b);
        void                        setSpotlight (float spotCutOff=45.f, float exponent=0.f);
		int							getLightID		();
        void                        setPosition      (float px, float py, float pz);
        void                        truck (float amount);
        void                        boom (float amount);
        void                        dolly (float amount);
        float                       getX();
        float                       getY();
        float                       getZ();
        void                        move (float x, float y, float z);
        void                        pan (float degrees);
        void                        tilt (float degrees);
        void                        roll (float degrees);
        void                        rotate (float degrees, float vx, float vy, float vz);
        void                        setGlobalPosition (float px, float py, float pz);
        void                        orbit(float longitude, float latitude, float radius, float cx, float cy, float cz);
        void                        setOrientation (float rot_x, float rot_y, float rot_z);
        void                        rotateAround (float degrees, float ax, float ay, float az, float cx, float cy, float cz);
    
        /* end */

		ofLight						m_light;
	
		#include "js/ofxJSLight.h"
};

#endif

