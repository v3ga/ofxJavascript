this.osc = null;
this.cercleX = 0;
this.cercleY = 0;
this.taille = 0;
this.R = 0;
this.G = 0;
this.B = 0;
//--------------------------------------------------------------
function setup()
{
	this.osc = new ofxJSOscReceiver();
	this.osc.setup(1234);
	of.Background(255,255,255);
	of.SetBackgroundAuto(false);
}

//--------------------------------------------------------------
function update(dt)
{
	while(this.osc.hasWaitingMessages())
	{

		var oscMessage = this.osc.getNextMessage();

		println( "+ received message : ");
		println( "  - address :"+oscMessage.getAddress() );
		println( "  - ip      :"+oscMessage.getRemoteIp() );
		println( "  - nb args :"+oscMessage.getNumArgs() );

		var arg0 = oscMessage.getArgAsInt(0);
		var arg1 = oscMessage.getArgAsInt(1);
		var arg2 = oscMessage.getArgAsInt(2);
		var arg3 = oscMessage.getArgAsInt(3);
		var arg4 = oscMessage.getArgAsInt(4);
		var arg5 = oscMessage.getArgAsInt(5);




		println("position X:"+arg0+" | position Y:"+arg1);
		println("taille :"+arg2+" | color : r"+arg3+" g"+arg4+" b"+arg5);

		this.cercleX = arg0;
		this.cercleY = arg1;
		this.taille = arg2;
		this.R = arg3;
		this.G = arg4;
		this.B = arg5;

	}

}

//--------------------------------------------------------------
function draw()
{



	of.SetColor(this.R,this.G,this.B)
	of.Fill();
	of.Circle(this.cercleX, this.cercleY, this.taille);
	
	
}