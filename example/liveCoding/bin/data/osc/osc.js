this.osc = null;


//--------------------------------------------------------------
function setup()
{
	this.osc = new ofxJSOscReceiver();
	this.osc.setup(1234);
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
	}
}

//--------------------------------------------------------------
function draw()
{
}


