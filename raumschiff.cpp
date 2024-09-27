#include "raumschiff.h"

Raumschiff::Raumschiff()
{
    save = new Rettungskapsel;
    cout << "Raumschiff geboren" << endl;
}

Raumschiff::Raumschiff(string inName)
{
    save = new Rettungskapsel;
    Name = inName;
}

Raumschiff::~Raumschiff()
{

    cout << "Raumschiff zerstört" << endl;
}

void Raumschiff::setName(string inName)
{
    Name = inName;
}

string Raumschiff::getName()
{
    return Name;
}

void Raumschiff::setPosition(int inX, int inY)
{
    xPos = inX;
    yPos = inY;
}

void Raumschiff::setRettung(Rettungskapsel *inSave)
{
    save = inSave;
}


Rettungskapsel* Raumschiff::getRettung()
{
    return save;
}
