/*
	Distance2D by Casey Reas & Ben Fry
	http://www.processing.org

	LiveCoding adaptation by
	Makram Saleh
	http://www.qbesq.com
*/ 
var max_distance;
var width = 400;
var height = 400;
var mouseX = 0;
var mouseY = 0;

function setup() {
	of.SetVerticalSync(true);
	of.EnableSmoothing();
	of.SetWindowShape(300, 300);
    of.SetLineWidth(0);
    max_distance = of.Dist(0, 0, width, height);
}

function draw() 
{
  of.Background(51, 51, 51);	
  of.EnableAlphaBlending();
  of.SetColor(255,255,255,180);

	
  for(var i = 0; i <= width; i += 25) {
    for(var j = 0; j <= height; j += 25) {
      var size = of.Dist(mouseX, mouseY, i, j);
      size = size/max_distance * 80;
      of.Ellipse(i, j, size, size);
    }
  }
}

function mouseMoved(x, y)
{
	mouseX = x;
	mouseY = y;
}
