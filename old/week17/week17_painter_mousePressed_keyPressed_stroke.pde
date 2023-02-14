void setup(){
  size(400,400);
  background(#FFFFFF);
}
void draw(){
  if(mousePressed){
    line(mouseX,mouseY,pmouseX,pmouseY);
  }
}
void keyPressed(){
  if(key=='1') stroke(#FF0307);
  if(key=='2') stroke(#FF8E03);
  if(key=='3') stroke(#FFF703);
  if(key=='4') stroke(#5EFF03);
  if(key=='5') stroke(#0383FF);
  if(key=='6') stroke(#0337FF);
  if(key=='7') stroke(#9903FF);
}
