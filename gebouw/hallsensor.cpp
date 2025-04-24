#include "hallsensor.h"

HallSensor::HallSensor(int x, int y) : Sensor(x, y){}

void HallSensor::activate(){
    activeer();
}

void HallSensor::deactivate(){
    deactiveer();
}

bool HallSensor::isOn() const{
    return isGeactiveerd();
}
