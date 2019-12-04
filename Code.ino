//black track over white surface
int leftMotor=11;
int rightMotor=13;
 int rightEye=3;
 int leftEye=6;
void setup(){
 pinMode(leftMotor,OUTPUT);
 pinMode(rightMotor,OUTPUT);
 pinMode(leftEye, INPUT);
 pinMode(rightEye, INPUT);
} 
void loop(){
 //forward
 if( digitalRead(rightEye)== LOW && digitalRead(leftEye)==LOW)
  { 
     digitalWrite(rightMotor, HIGH);
     digitalWrite(leftMotor, HIGH);
  }
//right
 else if( digitalRead(rightEye)== HIGH && digitalRead(leftEye)==LOW)
  { 
     digitalWrite(rightMotor, LOW);
     digitalWrite(leftMotor, HIGH);
   }
//left 
else if( digitalRead(rightEye)== LOW && digitalRead(leftEye)==HIGH)
  { 
     digitalWrite(rightMotor, HIGH);
     digitalWrite(leftMotor, LOW);
   }
//stop
else {
     digitalWrite(rightMotor, LOW);
     digitalWrite(leftMotor,  LOW);
   }

}
