#include "techniker.h"

Techniker::Techniker() {}

void Techniker::reparieren()
{
    cout << "Ich repariere" << endl;
}

void Techniker::printObjekDaten()
{
    cout << "Techniker" << endl;
    cout << getName() << endl;
    cout << energie << endl;
}
