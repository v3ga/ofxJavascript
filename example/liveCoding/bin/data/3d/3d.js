//--------------------------------------------------------------
this.rot = 0;
this.sizeObject = 60;

//--------------------------------------------------------------
function setup()
{
	of.SetWindowTitle("3d.js");
}

//--------------------------------------------------------------
function update(dt)
{
	this.rot += 45.0*dt;
}

//--------------------------------------------------------------
function draw()
{
	var step = of.GetWidth()/4;
	var x = step/2;

	of.Background(0,0,0);

	of.Translate(0, of.GetHeight()/2,0);
	of.NoFill();



	of.PushMatrix();
	of.Translate(x,0,0);
	of.RotateX(this.rot);
	of.RotateY(this.rot);
	of.DrawBox(0,0,0,this.sizeObject,this.sizeObject,this.sizeObject);
	of.PopMatrix();
	x+=step;

	of.PushMatrix();
	of.Translate(x,0,0);
	of.RotateX(this.rot);
	of.RotateY(this.rot);
	of.DrawCylinder(0,0,this.sizeObject,this.sizeObject);
	of.PopMatrix();
	x+=step;

	of.PushMatrix();
	of.Translate(x,0,0);
	of.RotateX(this.rot);
	of.RotateY(this.rot);
	of.DrawIcoSphere(0,0,0,this.sizeObject);
	of.PopMatrix();
	x+=step;

	of.PushMatrix();
	of.Translate(x,0,0);
	of.RotateX(this.rot);
	of.RotateY(this.rot);
	of.DrawCone(0,0,0,this.sizeObject,this.sizeObject);
	of.PopMatrix();
	x+=step;

}

//--------------------------------------------------------------
function mouseMoved(x,y)
{
}

