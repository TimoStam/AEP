#include "sleutelslot.h"
#include <string>
#include <QDebug>

Sleutelslot::Sleutelslot(std::string key) : correctKey(std::move(key)), locked(LOCKED) {}

void Sleutelslot::lock(){
    locked = LOCKED;
}

void Sleutelslot::unlock(const std::string& key){
    if (key == correctKey) {
        locked = UNLOCKED;
    }
}

bool Sleutelslot::isLocked()const{
    return locked;
}
