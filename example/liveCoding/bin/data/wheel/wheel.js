// testFontWheel.js
// 
// ofxJSGlobalFunctions (for "of" object)
// http://code.google.com/p/ofxjavascript/wiki/ofxJSGlobalFunctions
//
// ofxJSTrueTypeFont
// http://code.google.com/p/ofxjavascript/wiki/ofxJSTrueTypeFont

// XML / E4X
// https://developer.mozilla.org/En/E4X/Processing_XML_with_E4X

//--------------------------------------------------------------
mouseX = 0;
mouseY = 0;
rot = 0;

//--------------------------------------------------------------
function setup()
{
	of.SetWindowTitle("LiveCoding / fontWheel.js");

	myFont = new ofxJSTrueTypeFont();
	myFont.loadFont(ofPathData("wheel/Helvetica.ttf"),20);

	of.SetWindowShape(1000, 300);
	of.SetBackgroundAuto(false);
	of.SetVerticalSync(true);
	of.EnableSmoothing();
	of.Background(0,0,0);

	data = <root>
				<t v="openframeworks"/>
				<t v="liveCoding"/>
				<t v="released in 2009"/>
				<t v="Hey!"/>
				<t v="updated for 0071"/>
			</root>

}

//--------------------------------------------------------------
function update()
{
	rot = -(mouseX-of.GetWidth()/2)/of.GetWidth() * 360;
}

//--------------------------------------------------------------
function draw()
{

	of.Background(0,0,0);

	var strings = data.t;
	var nb = data.t.length();
	of.Translate(of.GetWidth()/2,of.GetHeight()/2,-30);
	of.RotateX(-20);
	of.RotateY(rot);
	for (i=0;i<nb;i++)
	{
		of.RotateY(360/ nb);
//		of.RotateX(180/ nb);
		myFont.drawString(strings[i].@v.toString(), 20,0);
	}
}

//--------------------------------------------------------------
function mouseMoved(x,y)
{
	mouseX = x;
	mouseY = y;
}

