#ifndef HALLSENSOR_H
#define HALLSENSOR_H
#include "sensor.h"

class HallSensor : public Sensor
{
public:
    HallSensor(int x, int y);
    void activate();
    void deactivate();
    bool isOn() const;
};

#endif // HALLSENSOR_H
