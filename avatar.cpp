#include "avatar.h"

Avatar::Avatar()
{
    cout << "Avatar Konstruktor" << endl;
}

void Avatar::setName(string inName)
{
    name = inName;
}

string Avatar::getName()
{
    return name;
}

void Avatar::setEnergie(int inEnergie)
{
    energie = inEnergie;
}

int Avatar::getEnergie()
{
    return energie;
}

void Avatar::printObjekDaten()
{
    cout << "Avatar" << endl;
    cout << name << endl;
    cout << energie << endl;
}
