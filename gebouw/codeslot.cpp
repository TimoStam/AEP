#include "codeslot.h"
#include "defines.h"
#include <cstdlib>

Codeslot::Codeslot(int code) : correctCode(code), locked(true) {}

void Codeslot::lock(){
    locked = LOCKED;
}

void Codeslot::unlock(const std::string& sCode) {
    int code = 0;
    try {
        code = std::stoi(sCode);
    }

    catch (const std::exception& e){return;}

        if (code == correctCode){
            locked = UNLOCKED;
        }

}

bool Codeslot::isLocked()const {
    return locked;
}
