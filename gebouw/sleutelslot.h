#ifndef SLEUTELSLOT_H
#define SLEUTELSLOT_H
#include <string>
#include "slot.h"

class Sleutelslot : public Slot
{
public:
    Sleutelslot(std::string correctKey);
    void lock()override;
    void unlock(const std::string& key)override;
    bool isLocked()override;
private:
    std::string correctKey;
    bool locked;
};

#endif // SLEUTELSLOT_H
