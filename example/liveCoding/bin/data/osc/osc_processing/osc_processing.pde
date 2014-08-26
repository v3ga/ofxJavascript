import oscP5.*;
import netP5.*;
  
OscP5 oscP5;
NetAddress myRemoteLocation;
float d = 20;
float R = 0;
float G = 0;
float B = 0;

void setup() {
  size(600,600);
  frameRate(25);
  oscP5 = new OscP5(this,12000);
  
  myRemoteLocation = new NetAddress("127.0.0.1",1234);
}


void draw() {
 // background(0);  
 d = random(10,50);
 R = random(0,255);
 G = random(0,255);
 B = random(0,255);
 
 
  ellipse(mouseX, mouseY, d, d);
  OscMessage myMessage = new OscMessage("/test");
  
  myMessage.add(mouseX); /* add an int to the osc message */
  myMessage.add(mouseY); 
  myMessage.add(d);
 myMessage.add(R);
 myMessage.add(G);
 myMessage.add(B);
  
  fill(R,G,B);

  oscP5.send(myMessage, myRemoteLocation); 
}



