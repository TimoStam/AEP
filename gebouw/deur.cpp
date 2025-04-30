#include "deur.h"
#include "defines.h"
#include <QPaintDevice>
#include <QPainter>
#include <QPen>

Deur::Deur(int a, int b, int dLength) : status(false), x(a), y(b), length(dLength) {}

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
