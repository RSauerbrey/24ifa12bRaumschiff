#ifndef MEDIZINER_H
#define MEDIZINER_H

#include "avatar.h"

class Mediziner : public Avatar
{
public:
    Mediziner();
    void heilen();
    void printObjekDaten();
};

#endif // MEDIZINER_H
