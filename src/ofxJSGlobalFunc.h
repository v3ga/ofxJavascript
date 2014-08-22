/*
 *  ofxJSWrapper.h
 *  openFrameworks
 *
 *  Created by Julien Gachadoat on 05/08/09.
 *  Copyright 2009 2Roqs. All rights reserved.
 *
 */

#ifndef OFX_JSGLOBALFUNC_H
#define OFX_JSGLOBALFUNC_H

#include "ofxJavascript.h"

class ofxJSGlobalFunc
{
	public:
		ofxJSGlobalFunc		(){};
		~ofxJSGlobalFunc		(){};
		
		static ofxJSGlobalFunc*	smp_instance;
		static ofxJSGlobalFunc*	instance();
		static void				initialize();
		static void				finalize();
		
		static string			sm_jsOfConstants;

		/* javascript functions */
		float	Random					(float val0, float val1);
		float	Randomf					();
		float	Randomuf				();
		float	RandomWidth				();
		float	RandomHeight			();
		float	Normalize				(float value, float min, float max);
		float	Map						(float value, float inputMin, float inputMax, float outputMin, float outputMax);
		float	Clamp					(float value, float min, float max);
		float	Lerp					(float start, float stop, float amt);
		float	Dist					(float x1, float y1, float x2, float y2);
		float	DistSquared				(float x1, float y1, float x2, float y2);
		int		Sign					(float n);
		bool	InRange					(float t, float min, float max);
		float	RadToDeg				(float radians);
		float	DegToRad				(float degrees);
    
		
		void	NoFill					();
		void	Fill					();
		void	SetLineWidth			(float lineWidth);
		
		void 	SetBackgroundAuto		(bool bManual);
//		void 	SetRectMode				(int mode);

		void	Background				(float r,float g,float b);
		void	Triangle				(float x1,float y1,float x2,float y2,float x3, float y3);
		void	Circle					(float x,float y, float radius);
		void	Ellipse					(float x, float y, float width, float height);
		void	Line					(float x1,float y1,float x2,float y2);
		void	Rect					(float x1,float y1,float w, float h);
		void	SetCircleResolution		(int res);
		void	SetColor				(int r, int g, int b);
		void	SetColor				(int r, int g, int b, int a);
		void	SetColor				(int gray);
        void	SetHexColor				(int hex);
		void	Curve					(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3);
		void	Bezier					(float x0, float y0, float x1, float y1, float x2, float y2, float x3, float y3);
        void    BeginShape              ();
        void    EndShape                ();
        void    Vertex                  (float x1, float y1);
        void    NextContour             (bool bClose=false);
        void    SetPolyMode             (int mode);
    void    BackgroundGradient          (float r1, float g1, float b1, float r2, float g2, float b2, int mode);
    
    //---------------------of3Dgraphics--------------
    
    void    DrawBox                 (float x, float y, float z, float width, float height, float depth);
    void    DrawCone                (float x, float y, float z, float radius, float height);
    void    DrawCylinder            (float x, float y, float radius, float height);
    void    DrawIcoSphere           (float x, float y, float z, float radius);
    void    DrawPlane               (float x, float y, float width, float height);
    void    DrawSphere              (float x, float y, float radius);
    
    //---------------------ofLight------------------
    
    void DisableLighting                    ();
    void DisableSeparateSpecularLight       ();
    void EnableLighting                     ();
    void EnableSeparateSpecularLight        ();
    bool GetLightingEnabled                 ();
    void SetSmoothLighting                  (bool b);
    
    //-----------------------------------------------
       
    

		void	EnableAlphaBlending		();
		void	DisableAlphaBlending	();

		void	EnableSmoothing			();
		void	DisableSmoothing		();

		void	PushMatrix				();
		void	PopMatrix				();
		void	Translate				(float x, float y, float z);
		void	Scale					(float xAmnt, float yAmnt, float zAmnt);
		void	Rotate					(float degrees, float vecX, float vecY, float vecZ);
		void	RotateX					(float degrees);
		void	RotateY					(float degrees);
		void	RotateZ					(float degrees);
		void	Rotate					(float degrees);		
				
		void	ResetElapsedTimeCounter	();
		float 	GetElapsedTimef			();
		int		GetElapsedTimeMillis	();
		int 	GetFrameNum				();

		int		GetSeconds				();
		int		GetMinutes				();
		int		GetHours				();
		float 	GetFrameRate			();
		void 	SetFrameRate			(int targetRate);
		void	SleepMillis				(int millis);

		void	EnableDataPath			();
		void	DisableDataPath			();
		string 	ToDataPath				(string path, bool absolute);

		int		GetWindowPositionX		();
		int 	GetWindowPositionY		();
		int 	GetScreenWidth			();
		int 	GetScreenHeight			();
		int		GetWindowMode			();			
		int 	GetWidth				();
		int 	GetHeight				();
		void 	SetWindowPosition		(int x, int y);
		void 	SetWindowShape			(int width, int height);
		void 	SetWindowTitle			(string title);
		void	EnableSetupScreen		();
		void	DisableSetupScreen		();
		void	SetFullscreen			(bool fullscreen);
		void	ToggleFullscreen		();
		void 	SetVerticalSync			(bool bSync);

		void 	HideCursor				();
		void 	ShowCursor				();

		void	DrawBitmapString		(string textString, float x, float y);

		void	SaveScreen				(string filename);
		void	SaveFrame				();
        float   Noise                   (float x, float y, float z);

		/* end */
		
		#include "js/ofxJSGlobalFunc.h"
};

#endif