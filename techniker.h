#ifndef TECHNIKER_H
#define TECHNIKER_H

#include "avatar.h"

class Techniker : public Avatar
{
public:
    Techniker();
    void reparieren();
    void printObjekDaten();
};

#endif // TECHNIKER_H
