#pragma once

#include "ofMain.h"
#include "js.h"


class testApp : public ofBaseApp{

	public:
		testApp			();
		~testApp		();

		void setup();
		void update();
		void draw();
		void exit();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);

		bool loadScript		(const char* scriptName, bool callSetup=true);
		bool reloadScript	();	
		void deleteScript	();

		string					m_pathAbsScript;
		ofxJSScript*			mp_script;
		float					m_tReloadScript;
		Poco::Timestamp			m_timestampFileScript;

};

