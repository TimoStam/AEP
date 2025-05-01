#ifndef SLOT_H
#define SLOT_H
#include <string>

class Slot
{
public:
    Slot();
    virtual ~Slot();
    virtual void unlock(const std::string&) = 0;
    virtual void lock() = 0;
    virtual bool isLocked() = 0;
};

#endif // SLOT_H
