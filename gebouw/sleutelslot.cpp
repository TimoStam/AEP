#include "sleutelslot.h"
#include "defines.h"
#include <string>

Sleutelslot::Sleutelslot(std::string key) : correctKey(key) {}

void Sleutelslot::lock(){
    locked = LOCKED;
}

void Sleutelslot::unlock(const std::string& key){
    if (key.compare(correctKey)){
        locked = UNLOCKED;
    }
}

bool Sleutelslot::isLocked(){
    return locked;
}
