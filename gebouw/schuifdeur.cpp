#include "schuifdeur.h"
#include <QPaintDevice>
#include <QPainter>
#include <QPen>
Schuifdeur::Schuifdeur() : Deur() {}

void Schuifdeur::close(){
    if(isOpen() == true){
        Deur.close();
    }
}

void Schuifdeur::draw(QPaintDevice* tp){
    QPainter painter(tp);
    QPen pen;
    painter.setPen(pen);
    painter.drawLine(xCoordinate(),
                     yCoordinate(),
                     xCoordinate()-doorLength(),
                     yCoordinate()-doorLength());
}
