var mouse = { x: 0, y: 0 };
var thickness = 0.1;
var scale = 0.825 ;


function setup()
{
	of.SetWindowShape(800, 600);
	of.SetBackgroundAuto(false);
	of.SetVerticalSync(true);
	of.SetCircleResolution(50);
}


function draw()
{
	of.Background(0,0,0);
	of.EnableSmoothing();
    
    var w = of.GetWidth();
    var h = of.GetHeight();
    
    of.PushMatrix();
    drawSpiro(w / 2, h / 2, w * 0.45, mouse.x / w * 360, 1);
    of.PopMatrix();
}


function drawSpiro(x, y, radius, rotation, iter)
{
    of.Translate(x, y, 0);
    of.RotateZ(rotation * iter);
    
    var t1 = 1 - thickness;
    
    of.SetColor(255,255,0);
    of.Fill();
    of.Circle(0, 0, radius*1.1);
    of.SetColor(0,0,0);
    of.Circle(0, 0, radius * t1);
    
    if(iter < 4)
        drawSpiro(radius * thickness, 0, radius * scale, rotation, iter + 1);
}


function mouseMoved(x, y)
{
	mouse.x = x;
	mouse.y = y;
}