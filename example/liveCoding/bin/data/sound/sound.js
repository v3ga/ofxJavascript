this.sound = null;

//--------------------------------------------------------------
function setup()
{
	
	this.sound = new ofxJSSoundPlayer();
	this.sound.loadSound(ofPathData("sound/data/arrow.mp3"), true);
	this.sound.setLoop(true);
}

//--------------------------------------------------------------
function update(dt)
{
//	this.sound.update();
}

//--------------------------------------------------------------
function draw()
{


//this.sound.unloadSound(); //Stops sound from playing, unloads "beat.mp3"
	
	
}

function mousePressed(x,y,button)
{
	this.sound.play();
	
}



function keyPressed(key)
{
       this.sound.stop();  
   
}

