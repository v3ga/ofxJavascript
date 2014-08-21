//
//  ofxJSNode.h
//  liveCoding
//
//  Created by Julien on 21/08/2014.
//
//

#ifndef OFX_JSNODE_H
#define OFX_JSNODE_H

#include "ofxJavascript.h"

class ofxJSNode
{
	public:
		/* javascript constructors */
		ofxJSNode			();
		/* end */

		static void					initialize();
		static void					finalize();

		/* javascript functions */
		void				setPosition	(float px, float py, float pz);
		/* end */

		ofNode				m_node;

		#include "js/ofxJSNode.h"

};

#endif
