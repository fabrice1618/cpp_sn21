#include <iostream>
#include <string>
#include "Element.h"
#include "Liste.h"

using namespace std;

int main(void)
{
    Liste liste;
    int pos;

    liste.ajouter_debut(1);
    liste.ajouter_debut(2);
    liste.ajouter_debut(3);
    pos = liste.gotoCurseur(1);
    cout << "Going 1. Curseur position:" << liste.getCurseurPos() << endl;
    pos = liste.gotoCurseur(2);
    cout << "Going 2. Curseur position:" << liste.getCurseurPos() << endl;
    pos = liste.gotoCurseur(3);
    cout << "Going 3. Curseur position:" << liste.getCurseurPos() << endl;
    pos = liste.gotoCurseur(5);
    cout << "Going 5. Curseur position:" << liste.getCurseurPos() << endl;
    pos = liste.gotoCurseur(2);
    liste.ajouter_curseur(99);

    liste.print();

    return EXIT_SUCCESS;
}

