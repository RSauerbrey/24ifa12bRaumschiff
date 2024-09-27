#include <iostream>
#include "raumschiff.h"
#include "rettungskapsel.h"
using namespace std;

int main()
{
    Raumschiff *r = new Raumschiff("Enterprise");
    Rettungskapsel *aggro;

    cout << r->getName() << endl;

    aggro = r->getRettung();
    delete r;
    aggro->setActCrew(4);
    cout << aggro->getActCrew() << endl;
    delete aggro;
    return 0;
}
