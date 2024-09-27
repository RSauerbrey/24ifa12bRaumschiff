#ifndef RETTUNGSKAPSEL_H
#define RETTUNGSKAPSEL_H
#include <iostream>
using namespace std;

class Rettungskapsel
{
private:
    int xPos;
    int yPos;
    int maxCrew = 5;
    int actCrew;
public:
    Rettungskapsel();
    ~Rettungskapsel();
    void setXPos(int inX);
    void setYPos(int inY);
    void setActCrew(int inCrew);
    int getXPos();
    int getYPos();
    int getActCrew();
};

#endif // RETTUNGSKAPSEL_H
