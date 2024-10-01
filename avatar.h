#ifndef AVATAR_H
#define AVATAR_H
#include <iostream>
using namespace std;

class Avatar
{
private:
    string name;
protected:

    int energie;
public:
    Avatar();
    void setName(string inName);
    string getName();
    void setEnergie(int inEnergie);
    int getEnergie();
    virtual void printObjekDaten();

};

#endif // AVATAR_H
