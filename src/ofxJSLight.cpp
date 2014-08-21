//
//  ofxJSLight.cpp
//  murmur
//
//  Created by Julien on 20/08/2014.
//
//

#include "ofxJSLight.h"
#include "ofxJSNode.h"
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

void ofxJSLight::setAmbientColor ( float r, float g, float b)
{
    ofFloatColor color(r,g,b);
	m_light.setAmbientColor(color);
}

void ofxJSLight::setDiffuseColor ( float r, float g, float b)
{
    ofFloatColor color(r,g,b);
	m_light.setDiffuseColor(color);
}

void ofxJSLight::setDirectional()
{
	m_light.setDirectional();
}

void ofxJSLight::setPointLight()
{
	m_light.setPointLight();
}

void ofxJSLight::setSpecularColor ( float r, float g, float b)
{
    ofFloatColor color(r,g,b);
	m_light.setSpecularColor(color);
}

void ofxJSLight::setSpotlight( float, float)
{
	m_light.setSpotlight();
}

