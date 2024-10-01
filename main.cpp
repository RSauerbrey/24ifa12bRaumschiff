#include <iostream>
#include "raumschiff.h"
#include "rettungskapsel.h"
#include "avatar.h"
#include "mediziner.h"
#include "techniker.h"
using namespace std;

int main()
{
    Raumschiff *r = new Raumschiff;
    r->setName("Enterprise");

    Avatar *a = new Avatar;
    a->setName("Spock");
    a->setEnergie(1000);
    a->printObjekDaten();

    Mediziner *m = new Mediziner;
    m->setName("Pille");
    m->setEnergie(1000);
    m->printObjekDaten();

    Techniker *t = new Techniker;
    t->setName("Scotty");
    t->setEnergie(1000);
    t->printObjekDaten();
    cout << "--------------------\n";

    r->addCrewMember(a);
    r->addCrewMember(m);
    r->addCrewMember(t);

    r->printCrew();


    delete a;
    delete m;
    delete t;
    return 0;
}
