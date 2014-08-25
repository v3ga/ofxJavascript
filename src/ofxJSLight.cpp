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

void ofxJSLight::setPosition ( float px, float py, float pz)
{
	m_light.setPosition(px,py,pz);
}

void ofxJSLight::truck ( float amount)
{
	m_light.truck(amount);
}

void ofxJSLight::boom ( float amount)
{
	m_light.boom(amount);
}

void ofxJSLight::dolly ( float amount)
{
	m_light.dolly(amount);
}

float ofxJSLight::getX()
{
	return m_light.getX();
}

float ofxJSLight::getY()
{
	return m_light.getY();
}

float ofxJSLight::getZ()
{
	return m_light.getZ();
}

void ofxJSLight::move ( float x, float y, float z)
{
	m_light.move(x, y, z);
}

void ofxJSLight::pan ( float degrees)
{
	m_light.pan(degrees);
}

void ofxJSLight::tilt ( float degrees)
{
	m_light.tilt(degrees);
}

void ofxJSLight::roll ( float degrees)
{
	m_light.roll(degrees);
}

void ofxJSLight::rotate ( float degrees, float vx, float vy, float vz)
{
	m_light.rotate(degrees, vx, vy, vz);
}

void ofxJSLight::setGlobalPosition ( float px, float py, float pz)
{
	m_light.setGlobalPosition(px, py, pz);
}

void ofxJSLight::orbit(float longitude, float latitude, float radius, float cx, float cy, float cz)
{
    ofVec3f centerPoint(cx,cy,cz);
	m_light.orbit(longitude,latitude,radius,centerPoint);
}

void ofxJSLight::setOrientation (float rot_x, float rot_y, float rot_z)
{
    ofVec3f eulerAngles(rot_x, rot_y, rot_z);
	m_light.setOrientation(eulerAngles);
}

void ofxJSLight::rotateAround(float degrees, float ax, float ay, float az, float cx, float cy, float cz)
{
    ofVec3f centerPoint(cx,cy,cz);
     ofVec3f axis(cx,cy,cz);
	m_light.rotateAround(degrees, axis, centerPoint);
}



