#include "deur.h"
#include <QPaintDevice>
#include <QPainter>
#include <QPen>

Deur::Deur() {}

void Deur::open(){
    status=true;
}

void Deur::close(){
    status=false;
}

void Deur::draw(QPaintDevice* tp){

}

bool Deur::isOpen(){
    return status;
}

int Deur::doorLength(){
    return length;
}

int Deur::xCoordinate()const{
    return x;
}

int Deur::yCoordinate()const{
    return y;
}
