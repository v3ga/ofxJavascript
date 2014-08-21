/*
  PROCESSINGJS.COM HEADER ANIMATION
  MIT License - Hyper-Metrix.com/F1LT3R

	LiveCoding adaptation by
	Makram Saleh
	http://www.qbesq.com
*/

function setup()
{
	this.width = 800;
	this.height = 400;
	this.mouseX = 0;
	this.mouseY = 0;
	
	of.SetVerticalSync(true);
	of.EnableSmoothing();
	of.SetWindowShape(this.width, this.height);
	
	// Set number of circles
	this.count = 50;

	// Set maximum and minimum circle size
	this.maxSize = 100;
	this.minSize = 20;

	// Build var array to store circle properties
	this.e = [];

	// Set size of dot in circle center
	this.ds=2;

	// Selected mode switch
	this.sel = 0;

	// Set drag switch to false
	this.dragging=false;

  	// Initiate array with random values for circles
  	for(var j=0;j< this.count; j++){
	    this.e[j] = [];
		this.e[j][0]= of.Random(0, this.width); // X 
	    this.e[j][1]= of.Random(0, this.height); // Y
	    this.e[j][2]= of.Random(minSize, maxSize); // Radius
	    this.e[j][3]= of.Random(-.5,.5); // X Speed
	    this.e[j][4]= of.Random(-.5,.5); // Y Speed
	}  
	
}


function draw()
{
	// Fill background black
	of.Background(0, 0, 0);	
	of.EnableAlphaBlending();

	//println("working: "+this.e);
	
	for (var j=0; j< this.count; j++) {
	    var radi=this.e[j][2];
	    var diam=radi;
	
		// If the cursor is within 2x the radius of current circle...
		if( of.Dist(e[j][0], e[j][1], this.mouseX, this.mouseY) < radi ){

	      // Change fill color to green.
	      of.SetColor(64,187,128,50);

	      // Remember user has circle "selected"  
	      this.sel=1;

	      // If user has mouse down and is moving...
	      if(this.dragging){
	        // Move circle to circle position
			this.e[j][0] = this.mouseX;
	        this.e[j][1] = this.mouseY;
	      }
	    } else {
	      // Keep fill color blue
	      of.SetColor(64,128,187,75);

	      // User has nothing "selected"
	      this.sel=0;
	    }
	
		// Draw circle
		of.Ellipse(e[j][0],e[j][1],radi,radi);
		
	    // Move circle
	    e[j][0] += e[j][3];
	    e[j][1] += e[j][4];

	    // Wrap edges of canvas so circles leave the top
	    //   and re-enter the bottom, etc...  
	    if( e[j][0] < -diam      ){ e[j][0] = width+diam;  } 
	    if( e[j][0] > width+diam ){ e[j][0] = -diam;       }
	    if( e[j][1] < 0-diam     ){ e[j][1] = height+diam; }
	    if( e[j][1] > height+diam){ e[j][1] = -diam;       }
		
		// If current circle is selected...
	    if(this.sel==1){
	      // Set fill color of center dot to white..
	      of.SetColor(255,255,255,255);
	    } else {            
	      // otherwise set center dot color to black.. 
	      of.SetColor(0,0,0,255);
	    }
		// Loop through all circles
	    for(var k=0;k< count;k++){

	      // If the circles are close...
	      if( of.Dist(this.e[j][0],this.e[j][1],this.e[k][0],this.e[k][1]) < radi){

	        // Stroke a line from current circle to adjacent circle
	        of.Line(this.e[j][0], this.e[j][1], this.e[k][0], this.e[k][1]);
	      }
	    }
	    // Draw dot in center of circle
	    of.Rect(e[j][0]-ds,e[j][1]-ds,ds*2,ds*2);
  	}

}

// If user drags mouse...
function mouseDragged(x,y)
{
	this.mouseX = x;
	this.mouseY = y;
  	// Set drag switch to true
  	this.dragging=true;
}
function mouseMoved(x, y)
{
	this.mouseX = x;
	this.mouseY = y;
}
  
// If user releases mouse...
function mouseReleased()
{
  // ..user is no-longer dragging
  this.dragging=false;
}

