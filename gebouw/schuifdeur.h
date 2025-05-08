#ifndef SCHUIFDEUR_H
#define SCHUIFDEUR_H
#include <QMainWindow>
#include "deur.h"
#include "sensor.h"


class Schuifdeur : public Deur
{
public:
    Schuifdeur(int x, int y, int length, bool isHorizontal, Sensor* sensor1);
    void close() override;
    void draw(QPaintDevice*) override;
private:
    bool horizontal;
    Sensor* sensor1;
};

#endif // SCHUIFDEUR_H
