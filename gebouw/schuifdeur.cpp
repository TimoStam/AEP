#include "schuifdeur.h"
#include <QPaintDevice>
#include <QPainter>
#include <QPen>
Schuifdeur::Schuifdeur(int a, int b, int dLength, bool isHorizontal) : Deur(a, b, dLength, codeslot), horizontal(isHorizontal) {}

void Schuifdeur::sClose(){
        close();
}

void Schuifdeur::sOpen(){
        open();
}

void Schuifdeur::draw(QPaintDevice* tp){
    QPainter painter(tp);
    QPen pen;
    painter.setPen(pen);

    if (!horizontal) {
        if (isOpen()) {
            painter.drawLine(xCoordinate(), yCoordinate(),
                             xCoordinate(), yCoordinate() + doorLength());
        } else {
            painter.drawLine(xCoordinate(), yCoordinate() - doorLength(),
                             xCoordinate(), yCoordinate());
        }
    } else {
        if (isOpen()) {
            painter.drawLine(xCoordinate() - doorLength(), yCoordinate(),
                             xCoordinate(), yCoordinate());
        } else {
            painter.drawLine(xCoordinate(), yCoordinate(),
                             xCoordinate() + doorLength(), yCoordinate());
        }
    }
}
