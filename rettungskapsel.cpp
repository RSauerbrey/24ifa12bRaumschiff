#include "rettungskapsel.h"

Rettungskapsel::Rettungskapsel()
{
    cout << "Rettungskapsel erstellt"  << endl;
}

Rettungskapsel::~Rettungskapsel()
{
    cout << "Rettungskapsel zerstört" << endl;
}

void Rettungskapsel::setXPos(int inX)
{
    xPos = inX;
}

void Rettungskapsel::setYPos(int inY)
{
    yPos = inY;
}

void Rettungskapsel::setActCrew(int inCrew)
{
    actCrew = inCrew;
}

int Rettungskapsel::getXPos()
{
    return xPos;
}

int Rettungskapsel::getYPos()
{
    return yPos;
}

int Rettungskapsel::getActCrew()
{
    return actCrew;
}
