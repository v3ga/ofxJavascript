#include "ofxJSScript.h"

//--------------------------------------------------------------
ofxJSScript::ofxJSScript(string id)
{
	m_id		= id;	
	m_content	= "";
}

//--------------------------------------------------------------
ofxJSScript::~ofxJSScript()
{
	m_content	= "";
}

//--------------------------------------------------------------
bool ofxJSScript::load(string pathAbsolute)
{
#ifdef TARGET_WIN32
	std::replace( pathAbsolute.begin(), pathAbsolute.end(), '/', '\\' ); // fix any unixy paths...
#endif

	m_pathAbsolute = pathAbsolute;
	if (ofxJSUtils::readFileIntoString(pathAbsolute, m_content))
	{	
		string splitStr = "/";
#ifdef TARGET_WIN32
		splitStr = "\\";
#endif

		vector<string> strings = ofSplitString(pathAbsolute, splitStr);

		m_id = strings[strings.size()-1];

		return true;
	}
	else
	{
		ofLog(OF_LOG_ERROR, "Error loading the script @ %s", m_pathAbsolute.c_str());
		m_pathAbsolute = "";
	}

	return false;
}

//--------------------------------------------------------------
bool ofxJSScript::loadFromData(string pathRelativeData)
{
	string pathAbsolute = ofToDataPath(pathRelativeData, true);
//	printf("ofxJSScript::loadFromData(), pathAbsolute=%s\n", pathAbsolute.c_str());

	return load(pathAbsolute);
}


