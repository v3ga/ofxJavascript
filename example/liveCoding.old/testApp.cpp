#include "testApp.h"

//--------------------------------------------------------------
testApp::testApp()
{
	mp_script = 0;
}

//--------------------------------------------------------------
testApp::~testApp()
{
}


//--------------------------------------------------------------
void testApp::setup()
{
	if (initJS())
	{
		//loadScript("spiro.js");
		//loadScript("image/image.js");
		//loadScript("distance2D.js");
		loadScript("wheel/wheel.js");
	}
}

//--------------------------------------------------------------
void testApp::update()
{
	if (mp_script == 0) return;

	// Delta time
	float dt = (float) ofGetLastFrameTime();
	
	// Reload
	m_tReloadScript += dt;
	if (m_tReloadScript>=1.0f)
	{
		m_tReloadScript = 0.0f;		
	
		ofFile fileScript(m_pathAbsScript);
		Poco::File& pocoFileScript = fileScript.getPocoFile();
		Poco::Timestamp timestamp = pocoFileScript.getLastModified();
		if (timestamp > m_timestampFileScript)
		{
			m_timestampFileScript = timestamp;
			reloadScript();
		}
	}

	// Call update on script
	ofxJSValue retVal;
	ofxJSValue args[1];
	args[0] = float_TO_ofxJSValue(dt);
	ofxJSCallFunctionNameGlobal_IfExists("update", args,1,retVal);
}

//--------------------------------------------------------------
void testApp::draw()
{
	if (mp_script == 0) return;

	ofxJSValue retVal;
	ofxJSCallFunctionNameGlobal_NoArgs_IfExists("draw", retVal);
}

//--------------------------------------------------------------
void testApp::exit(){
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key)
{ 
	if (mp_script == 0) return;

	ofxJSValue retVal;
	ofxJSValue args[1];
	args[0] = int_TO_ofxJSValue(key);

	ofxJSCallFunctionNameGlobal_IfExists("keyPressed", args,1, retVal);
}

//--------------------------------------------------------------
void testApp::keyReleased  (int key)
{ 
	if (mp_script == 0) return;

	ofxJSValue retVal;
	ofxJSValue args[1];
	args[0] = int_TO_ofxJSValue(key);
	ofxJSCallFunctionNameGlobal_IfExists("keyReleased", args,1, retVal);
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y )
{
	if (mp_script == 0) return;

	ofxJSValue retVal;
	ofxJSValue args[2];
	args[0] = int_TO_ofxJSValue(x);
	args[1] = int_TO_ofxJSValue(y);
	ofxJSCallFunctionNameGlobal_IfExists("mouseMoved", args,2, retVal);
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button)
{
	if (mp_script == 0) return;

	ofxJSValue retVal;
	ofxJSValue args[3];
	args[0] = int_TO_ofxJSValue(x);
	args[1] = int_TO_ofxJSValue(y);
	args[2] = int_TO_ofxJSValue(button);
	ofxJSCallFunctionNameGlobal_IfExists("mouseDragged", args,3, retVal);
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button)
{
	if (mp_script == 0) return;

	ofxJSValue retVal;
	ofxJSValue args[3];
	args[0] = int_TO_ofxJSValue(x);
	args[1] = int_TO_ofxJSValue(y);
	args[2] = int_TO_ofxJSValue(button);
	ofxJSCallFunctionNameGlobal_IfExists("mousePressed", args,3, retVal);
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button)
{
	if (mp_script == 0) return;

	ofxJSValue retVal;
	ofxJSValue args[3];
	args[0] = int_TO_ofxJSValue(x);
	args[1] = int_TO_ofxJSValue(y);
	args[2] = int_TO_ofxJSValue(button);
	ofxJSCallFunctionNameGlobal_IfExists("mouseReleased", args,3, retVal);
}


//--------------------------------------------------------------
bool testApp::loadScript(const char* scriptName)
{
//	printf("M_loadScript() > path='%s'\n", s);
	{
		ofFile fileScript(ofToDataPath(scriptName));
		m_pathAbsScript = fileScript.getAbsolutePath();
		
		printf("Loading '%s'\n", m_pathAbsScript.c_str());

		mp_script = ofxJSLoad(m_pathAbsScript.c_str(), "___tmpScript___");
		if (mp_script){

			if (ofxJSEval(mp_script))
			{
				printf("OK > evaluated '%s'\n", scriptName);
				
				// Call setup 
				ofxJSValue retVal;
				ofxJSCallFunctionNameGlobal_NoArgs_IfExists("setup", retVal);
				
				return true;
			}
			else{
				printf("ERROR > cannot eval script '%s'\n", scriptName);
				deleteScript();
			}
		}
		else{
			printf("ERROR > cannot load script '%s'\n", scriptName);
			deleteScript();
		}
	}

	return false;

}

//--------------------------------------------------------------
bool testApp::reloadScript()	
{
	return loadScript(m_pathAbsScript.c_str());
}

//--------------------------------------------------------------
void testApp::deleteScript()
{
	if (mp_script)
	{
		delete mp_script;
		mp_script=0;
		m_pathAbsScript = "";
	}
}
