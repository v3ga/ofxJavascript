//--------------------------------------------------------------
this.rot = 0;
this.sizeObject = 100;
this.mouseX = 0;
this.mouseY = 0;
this.light = null;

//--------------------------------------------------------------
function setup()
{
	of.SetWindowTitle("3d.js");
	this.light = new ofxJSLight;
	
}

//--------------------------------------------------------------
function update(dt)
{
	this.rot += 40.0*dt;
	
}

//--------------------------------------------------------------
function draw()
{
	
	
	of.EnableLighting();
	
	
	
	
	this.light.setPointLight ();
	this.light.enable(); 
	this.light.setPosition(45,70,0);
	
	
	
	
	
	
	var step = of.GetWidth()/4;
	var x = step/2;

	of.Background(0,0,0);
	
	
	
	
	
	of.SetColor(255, 255,255);
	of.Translate(0, of.GetHeight()/2,0);
	of.Fill();



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
this.light.disable();
	of.DisableLighting();
	
	//of.Translate(0, of.GetHeight()/2,0);
	of.Fill();
	of.SetColor(255, 219,33);
	of.Circle (0,0,5);
}

//--------------------------------------------------------------
function mouseMoved(x,y)
{
	this.mouseX = x;
	this.mouseY = y;

}

