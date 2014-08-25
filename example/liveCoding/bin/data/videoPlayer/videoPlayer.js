this.video = null;

//--------------------------------------------------------------
function setup()
{
	of.SetWindowTitle("videoPlayer.js");

	this.video = new ofxJSVideoPlayer();
	this.video.loadMovie(ofPathData("videoPlayer/data/fingers.mov"));
	this.video.play();
}

//--------------------------------------------------------------
function update(dt)
{
	this.video.update();
}

//--------------------------------------------------------------
function draw()
{
	this.video.draw(0,0);
}


