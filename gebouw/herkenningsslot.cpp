#include "herkenningsslot.h"

HerkenningsSlot::HerkenningsSlot() : db1(nullptr), locked(LOCKED) {}

void HerkenningsSlot::unlock(const std::string& name){
    auto naam = cardbox.find(name);
    if (naam != cardbox.end() && naam->second){
        locked=UNLOCKED;
    }
}

void HerkenningsSlot::lock(){
    locked=LOCKED;
}

bool HerkenningsSlot::isLocked()const{
    return locked;
}

void HerkenningsSlot::showCardbox()const{
    std::string users;
    if (!db1 || cardbox.empty()){
        return;
    }
    for (const auto& [name, access] : cardbox){
        users += "name: " + name + ", access =" + (access ? "true" : "false") + "\n";
    }
    db1->clearMedium();
    db1->showText(users);
}

void HerkenningsSlot::addDrukbox(Afdrukker* afdrukker){
    db1 = afdrukker;
}

void HerkenningsSlot::addAuthorisation(const std::string& name, bool access){
    cardbox[name] = access;
}
