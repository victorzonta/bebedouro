#include <Arduino.h>
int touchPin = 9;
int relePin = 2;

int val = 0;
int rele = 0;
int touched = 0;

void setup() {
  Serial.begin(9600);
  pinMode(touchPin, INPUT); 
  pinMode(relePin, OUTPUT);

}

void loop() {

  val = digitalRead(touchPin);

  if(val == HIGH && rele == LOW){

    touched = 1-touched;
    delay(100);
  }    

  rele = val;

      if(touched == HIGH){
        Serial.println("rele ON");
        digitalWrite(relePin, LOW); 
       
      }else{
        Serial.println("rele OFF");
        digitalWrite(relePin, HIGH);
   
      } 
  delay(100);
}  