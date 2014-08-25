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
		string scriptName = "osc/osc.js";
		// loadScript("spiro/spiro.js");
		// loadScript("image/image.js");
		// loadScript("ditance2D/distance2D.js");
		// loadScript("wheel/wheel.js");
		// loadScript("header/header.js");
		// loadScript("3d/3d.js");
		// loadScript("videoPlayer/videoPlayer.js");
		if ( loadScript(scriptName.c_str()) )
		{
			ofxJSValue retVal;
			ofxJSCallFunctionNameGlobal_NoArgs_IfExists("setup_once", retVal);
		}
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
void testApp::exit()
{
	ofxJSValue retVal;
	ofxJSCallFunctionNameGlobal_NoArgs_IfExists("exit", retVal);
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
bool testApp::loadScript(const char* scriptName,bool callSetup)
{
//	printf("M_loadScript() > path='%s'\n", s);
	{
		ofFile fileScript(ofToDataPath(scriptName));
		m_pathAbsScript = fileScript.getAbsolutePath();

		if (mp_script){
			ofxJSValue retVal;
			ofxJSCallFunctionNameGlobal_NoArgs_IfExists("exit", retVal);
//			deleteScript();
		}
		
		ofLogNotice("loading " + m_pathAbsScript);

		mp_script = ofxJSLoad(m_pathAbsScript.c_str(), "___tmpScript___");
		if (mp_script){

			if (ofxJSEval(mp_script))
			{
				ofLogNotice("evaluated " + ofToString(scriptName));
				
				// Call setup
				if (callSetup){
					ofxJSValue retVal;
					ofxJSCallFunctionNameGlobal_NoArgs_IfExists("setup", retVal);
				}
				
				return true;
			}
			else{
				ofLogError("cannot eval script '"+ofToString(scriptName)+"'");
				deleteScript();
			}
		}
		else{
			ofLogError("cannot load script '"+ofToString(scriptName)+"'");
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
