//
//  ofxJSLight.cpp
//  murmur
//
//  Created by Julien on 20/08/2014.
//
//

#include "ofxJSLight.h"
#include "js/ofxJSLight.cpp"


ofxJSLight::ofxJSLight()
{
}

ofxJSLight::~ofxJSLight()
{
}


void ofxJSLight::initialize()
{
	ofxJSLight::JSInit	(ofxJSGetContext(), ofxJSGetGlobalObj());
}


void ofxJSLight::destroy()
{
	m_light.destroy();
}


void ofxJSLight::enable()
{
	m_light.enable();
}

void ofxJSLight::disable()
{
	m_light.disable();
}

int ofxJSLight::getLightID()
{
	return m_light.getLightID();
}

