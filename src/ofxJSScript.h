#ifndef OFX_JSSCRIPT_H
#define OFX_JSSCRIPT_H

#include <ofMain.h>
#include <ofxJSUtils.h>


class ofxJSScript
{
	public:
			ofxJSScript		(string id);
			~ofxJSScript	();
	
			string				m_id;
			string				m_content;
			string				m_pathAbsolute;
			
			virtual		bool	load			(string pathAbsolute);
			virtual		bool	loadFromData	(string pathRelativeData);
};


#endif // OFX_JSSCRIPT_H
