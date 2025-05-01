#include "deur.h"
#include "defines.h"
#include <QPaintDevice>
#include <QPainter>
#include <QPen>

Deur::Deur(int a, int b, int dLength, Codeslot cs) : status(false), x(a), y(b), length(dLength), codeslot(std::make_shared<Codeslot>(cs)){}

Deur::~Deur(){}

void Deur::open(){
    status=OPEN;
}

void Deur::close(){
    status=CLOSED;
    codeslot->lock();

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
