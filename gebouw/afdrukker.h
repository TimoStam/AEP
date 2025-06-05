#ifndef AFDRUKKER_H
#define AFDRUKKER_H

#include <string>

class Afdrukker
{
public:
    virtual void showText(const std::string&) = 0;
    virtual void clearMedium() = 0;
    virtual ~Afdrukker() = default;
};

#endif // AFDRUKKER_H
