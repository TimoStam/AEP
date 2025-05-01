#include "codeslot.h"
#include "defines.h"
#include <cstdlib>

Codeslot::Codeslot(int code) : correctCode(code), locked(true) {}

void Codeslot::lock(){
    locked = LOCKED;
}

void Codeslot::unlock(const std::string& sCode) {
        int code = std::stoi(sCode);
        if (code == correctCode){
            locked = UNLOCKED;
        }
}

bool Codeslot::isLocked(){
    return locked;
}
