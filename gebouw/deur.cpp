#include "deur.h"
#include "defines.h"
#include <QPaintDevice>
#include <QPainter>
#include <QPen>

Deur::Deur(int a, int b, int dLength)
    : status(CLOSED), x(a), y(b), length(dLength){}

Deur::~Deur(){}

void Deur::open(){
    for (int i = 0; i < getSloten().size(); i++){
        if (getSloten()[i]->isLocked()){
            return;
        }
    }
    status=OPEN;
}

void Deur::close(){
    for (int i = 0; i< getSloten().size(); i++){
        getSloten()[i]->lock();
    }
    status=CLOSED;
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

void Deur::setSlot(std::shared_ptr<Slot> slot) {
    this->slot = std::move(slot);
}

void Deur::addSlot(std::shared_ptr<Slot> slot){
    sloten.push_back(std::move(slot));
}

std::vector<std::shared_ptr<Slot>> Deur::getSloten(){
    return sloten;
}
