//
//  ofxJSNode.cpp
//  liveCoding
//
//  Created by Julien on 21/08/2014.
//
//

#include "ofxJSNode.h"
#include "js/ofxJSNode.cpp"

ofxJSNode::ofxJSNode()
{
}

void ofxJSNode::initialize()
{
	ofxJSNode::JSInit	(ofxJSGetContext(), ofxJSGetGlobalObj());
}


void ofxJSNode::setPosition(float px, float py, float pz)
{
	m_node.setPosition(px,py,pz);
}
