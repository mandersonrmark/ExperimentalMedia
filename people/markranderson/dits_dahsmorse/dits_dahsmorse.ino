int dits=500;
int off = 500;
int dahs = 1000;
void setup(){
 pinMode(13,OUTPUT);
}
void loop(){
//section 1
  signalOn(dits);
 
   signalOn(dahs);
   signalOn(dahs);

    signalOn(dits);
    signalOn(dits);
    signalOn(dits);
    signalOn(dits);
 
 signalOn(dits);

   signalOn(dahs);
   signalOn(dahs); 
   
   //section 2//

delay(off*2);

    signalOn(dits);
    signalOn(dits);
    signalOn(dits);
    signalOn(dits);   
    signalOn(dits);   
    
signalOn(dahs);
signalOn(dahs); 
    signalOn(dits);
    signalOn(dits);
    signalOn(dits);
    signalOn(dits);
    
    //section 3//
    
delay(off*2);

   signalOn(dahs);
   signalOn(dahs); 
   
signalOn(dits); 
   
   signalOn(dahs);
   signalOn(dahs); 
   signalOn(dahs);
   signalOn(dahs); 
   
signalOn(dits);
signalOn(dits);  
//section 4

  delay(off*2);

signalOn(dits);  

   signalOn(dahs);
   signalOn(dahs); 

signalOn(dits);    

    signalOn(dahs);   

signalOn(dits);      

   signalOn(dahs); 
   signalOn(dahs);
   signalOn(dahs); 

signalOn(dits);
signalOn(dits);
 
     signalOn(dahs); 

signalOn(dahs);
signalOn(dahs); 

    signalOn(dits);

signalOn(dits);
signalOn(dits);
signalOn(dits);
signalOn(dits);
  signalOn(dahs);
}

void signalOn(int t_1){ 
  digitalWrite(13,HIGH);
  delay(t_1);
  digitalWrite(13,LOW);
  delay(off);
 }

