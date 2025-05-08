#include "draaideur.h"
#include <QPaintDevice>
#include <QPainter>
#include <QPen>

Draaideur::Draaideur(int a, int b, int dLength, bool isHorizontal)
    : Deur(a, b, dLength), horizontal(isHorizontal) {}


void Draaideur::draw(QPaintDevice* tp) {
    QPainter painter(tp);
    QPen pen(Qt::red);
    painter.setPen(pen);

    if (isOpen()) {
        if (horizontal) {
            painter.drawLine(xCoordinate(), yCoordinate() - doorLength(),
                             xCoordinate(), yCoordinate());
        } else {
            painter.drawLine(xCoordinate(), yCoordinate(),
                             xCoordinate() + doorLength(), yCoordinate());
        }
    } else {
        if (horizontal){
            painter.drawLine(xCoordinate() - doorLength(), yCoordinate(),
                             xCoordinate(), yCoordinate());
        }
        else {
            painter.drawLine(xCoordinate(), yCoordinate(),
                             xCoordinate(), yCoordinate() - doorLength());
        }
    }
}
