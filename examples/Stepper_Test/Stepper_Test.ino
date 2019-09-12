/*
  ================================================ CNC SHIELD KÜTÜPHANESİ / CNC SHIELD LIBRARY ================================================

  Bu kütüphane Arduino NANO CNC shield ve Arduino UNO
  CNC shield için hazırlanmıştır.
  -----------------------------------------------------
  This library is made for Arduino NANO and
  Arduino UNO CNC shield.
  -----------------------------------------------------

*/
#include <CNCshield.h>// kütüphane |library
CNCshield cnc;// CNCshield nesnesine bir isim veriyoruz | We give the CNCshield object a name
void setup() {
  cnc.pinSetup();// Gerekli pinleri ayarlıyoruz. | We set the necessary pins.
}

void loop() {
  //cnc.stepsON(); //Bu komut motorları aktif hale getirir.(motorlar normalde aktiftir.) | This command is turn on the motors.(motors are normaly active)
  //cnc.stepsOFF(); //Bu komut motorları Kapatır. | This command is turn off the motors.

  cnc.XdirRight();
  cnc.StepX(200, 5); //StepX(adım sayısı,hız(0-20); | StepX(steps num,speed(0-20));
  delay(1000);         // hareketler arası 1 sn bekleme | 1 second wait between movements
  cnc.YdirLeft();
  cnc.StepY(200, 5); //StepY(adım sayısı,hız(0-20); | StepY(steps num,speed(0-20));
  delay(1000);         // hareketler arası 1 sn bekleme | 1 second wait between movements
  cnc.ZdirRight();
  cnc.StepZ(200, 5); //StepZ(adım sayısı,hız(0-20); | StepZ(steps num,speed(0-20));
  delay(1000);         // hareketler arası 1 sn bekleme | 1 second wait between movements
}
