pmouseX = 0;
mouseX = 0;
pmouseY = 0;
mouseY = 0;
firstClick=true;
mouseDrag=false;
//--------------------------------------------------------------
function setup()
{
	println("- JS : setup() called");

	of.SetWindowShape(500,500);
	of.SetWindowTitle("OpenframeworksJS");
	of.Background(0,0,0);
	of.SetBackgroundAuto(false);
}

//--------------------------------------------------------------
function draw()
{
	if (mouseDrag)
		of.Line(pmouseX,pmouseY,mouseX,mouseY);
}

//--------------------------------------------------------------
function update()
{
}

//--------------------------------------------------------------
function keyPressed(k)
{
	of.Background(0,0,0);
}

//--------------------------------------------------------------
function keyReleased(k)
{
}

//--------------------------------------------------------------
function mouseMoved(x,y)
{
}

//--------------------------------------------------------------
function mouseDragged(x,y,button)
{
	pmouseX = mouseX;
	pmouseY = mouseY;

	mouseX = x;
	mouseY = y;
}

//--------------------------------------------------------------
function mousePressed(x,y,button)
{
	if (firstClick)
	{
		firstClick = false;
		mouseX = pmouseX = x;
		mouseY = pmouseY = y;
	}
	mouseDrag = true;
}

//--------------------------------------------------------------
function mouseReleased()
{
	mouseDrag	= false;
	firstClick	= true;
}
