#include "CNCshield.h"
//#include "Arduino.h"


CNCshield::CNCshield (void){
}

void CNCshield::pinSetup(){
pinMode(StepXPin, OUTPUT);
pinMode(directionXPin, OUTPUT);

pinMode(StepYPin, OUTPUT);
pinMode(directionYPin, OUTPUT);

pinMode(StepZPin, OUTPUT);
pinMode(directionZPin, OUTPUT);

pinMode(enablePin, OUTPUT);
digitalWrite(enablePin, LOW);
}

void CNCshield::XdirRight(){
digitalWrite(directionXPin, HIGH);
}
void CNCshield::XdirLeft(){
digitalWrite(directionXPin, LOW);
}

void CNCshield::YdirRight(){
digitalWrite(directionYPin, HIGH);
}
void CNCshield::YdirLeft(){
digitalWrite(directionYPin, LOW);
}

void CNCshield::ZdirRight(){
digitalWrite(directionZPin, HIGH);
}
void CNCshield::ZdirLeft(){
digitalWrite(directionZPin, LOW);
}

void CNCshield::StepX(int stepX, int speedX){
    speedX = map(speedX, 1, 20, 500, 6000);

for(int i=0; i<stepX;i++){
digitalWrite(StepXPin, HIGH);
delayMicroseconds(speedX);
digitalWrite(StepXPin, LOW);
delayMicroseconds(speedX);
}
}

void CNCshield::StepY(int stepY, int speedY){
    speedY = map(speedY, 1, 20, 500, 6000);

for(int i=0; i<stepY;i++){
digitalWrite(StepYPin, HIGH);
delayMicroseconds(speedY);
digitalWrite(StepYPin, LOW);
delayMicroseconds(speedY);
}
}

void CNCshield::StepZ(int stepZ, int speedZ){
    
    speedZ = map(speedZ, 1, 20, 500, 6000);

for(int i=0; i<stepZ;i++){
digitalWrite(StepZPin, HIGH);
delayMicroseconds(speedZ);
digitalWrite(StepZPin, LOW);
delayMicroseconds(speedZ);
}
}

void CNCshield::stepsON(){
    digitalWrite(enablePin, LOW);
}
void CNCshield::stepsOFF(){
    digitalWrite(enablePin, HIGH);
}
