#include <Servo.h>


String InBytes;
Servo myservo;

void setup(){
  Serial.begin(9600);
  myservo.attach(5);
}

void loop(){
  if(Serial.available()> 0){
    InBytes=Serial.readStringUntil('\n');
    int pos = InBytes.toInt();
    if(pos>=0&pos<=200){pos=150;myservo.write(pos);}
    else if(pos>200&pos<=400){pos=90;myservo.write(pos);}
    else if(pos>400&pos<=600){pos=30;myservo.write(pos);}
//      Serial.write("connects");
//      Serial.println("Connected");
    }
//    else if(InBytes=="off"){
//      Serial.write("Disconnecteds");
//      Serial.println("Disconnected");
//    }
//    else{
//      Serial.write("Noooo");
//      Serial.println("Invaled Input");
    }
  


