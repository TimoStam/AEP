#ifndef CODESLOT_H
#define CODESLOT_H
#include "slot.h"
class Codeslot : public Slot
{
public:
    Codeslot(int code);
    void lock()override;
    void unlock(const std::string& sCode)override;
    bool isLocked()override;
private:
    int correctCode;
    bool locked;
};

#endif // CODESLOT_H
