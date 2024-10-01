#ifndef RAUMSCHIFF_H
#define RAUMSCHIFF_H
#include "avatar.h"
#include "rettungskapsel.h"
#include <iostream>
#include <vector>
using namespace std;

class Raumschiff
{
private:
    string Name;
    int xPos;
    int yPos;
    Rettungskapsel* save;
    vector<Avatar*> crewListe;

public:
    Raumschiff();
    Raumschiff(string inName);
    ~Raumschiff();
    void setName(string inName);
    string getName(void);
    void setPosition(int inX, int inY);
    void setRettung(Rettungskapsel* inSave);
    Rettungskapsel* getRettung();
    void addCrewMember(Avatar* inAvatar);
    void printCrew();


};

#endif // RAUMSCHIFF_H
