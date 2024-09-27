#ifndef RAUMSCHIFF_H
#define RAUMSCHIFF_H
#include "rettungskapsel.h"
#include <iostream>
using namespace std;

class Raumschiff
{
private:
    string Name;
    int xPos;
    int yPos;
    Rettungskapsel* save;
public:
    Raumschiff();
    Raumschiff(string inName);
    ~Raumschiff();
    void setName(string inName);
    string getName(void);
    void setPosition(int inX, int inY);
    void setRettung(Rettungskapsel* inSave);
    Rettungskapsel* getRettung();


};

#endif // RAUMSCHIFF_H
