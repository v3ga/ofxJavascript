// testImage.js
// 
// ofxJSGlobalFunctions (for "of" object)
// http://code.google.com/p/ofxjavascript/wiki/ofxJSGlobalFunctions
//
// ofxJSImage
// http://code.google.com/p/ofxjavascript/wiki/ofxJSImage


//--------------------------------------------------------------
function setup()
{
	of.SetWindowTitle("LiveCoding / testImage.js");

	myImage = new ofxJSImage();
	myImage.loadImage(ofPathData("image/cloud.jpg"));

	of.SetWindowShape(myImage.width, myImage.height);
	of.SetBackgroundAuto(false);
	of.SetVerticalSync(true);
}

//--------------------------------------------------------------
function draw()
{
    of.Background(0,0,0);
	myImage.draw(0,0);
}


