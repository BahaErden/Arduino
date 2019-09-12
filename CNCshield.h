#ifndef CNCshield_h
#define CNCshield_h
#include "Arduino.h"

class CNCshield {
    private:
    int enablePin = 8;

    int StepXPin = 5;
    int directionXPin = 2;

    int StepYPin = 6;
    int directionYPin = 3;

    int StepZPin = 7;
    int directionZPin = 4;

    public:
    CNCshield();
    void pinSetup();
    void StepX(int stepX, int speedX);
    void StepY(int stepY, int speedY);
    void StepZ(int stepZ, int speedZ);
    void stepsON();
    void stepsOFF();

    void XdirRight();
    void XdirLeft();

    void YdirRight();
    void YdirLeft();

    void ZdirRight();
    void ZdirLeft();
};

#endif