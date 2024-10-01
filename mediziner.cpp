#include "mediziner.h"

Mediziner::Mediziner()
{
    cout << "Mediziner Konstruktor" << endl;
}

void Mediziner::heilen()
{
    cout << "Ich heile" << endl;
}

void Mediziner::printObjekDaten()
{
    cout << "Mediziner" << endl;
    cout << getName() << endl;
    cout << energie << endl;
}
