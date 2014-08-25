this.cam = null;


//--------------------------------------------------------------
function setup()
{
	this.cam = new ofxJSVideoGrabber();
	this.cam.setDeviceID(0);
	this.cam.initGrabber(320,240,true);

	of.SetWindowTitle("videoGrabber.js");
	of.SetWindowShape(this.cam.width*2, this.cam.height*2);
}

//--------------------------------------------------------------
function update(dt)
{
	this.cam.update();
}

//--------------------------------------------------------------
function exit()
{
	this.cam.close();
}


//--------------------------------------------------------------
function draw()
{
	this.cam.draw(10,50,of.GetWidth(),of.GetHeight());
}


