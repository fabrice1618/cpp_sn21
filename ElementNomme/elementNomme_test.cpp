#include <iostream>
#include <math.h>
#include <string>
#include "ElementNomme.h"

using namespace std;

// 1er test: Utilisation d'instances statiques
void static_test()
{
    // elements crees comme variable locale
    ElementNomme elt1(1);           // utilisation d'un contructeur alternatif
    ElementNomme elt2("octet", 8);
    ElementNomme elt3("kilo", 1024);
    ElementNomme elt4("mega", pow(1024, 2) );

    elt1.print();
    elt2.print();
    elt3.print();
    elt4.print();
}

// 2eme test: utilisation d'instance dynamiques
void dynamic_test()
{
    const int element_max = 32;
    ElementNomme* elt[element_max]; // Tableau de pointeurs d'elements

    // Création des elements 
    for( int i=0; i < element_max; i++) {
        elt[i] = new ElementNomme( to_string(i), pow(2, i ) );
    }

    // Afficher les elements
    for( int i=0; i < element_max; i++) {
        elt[i]->print();
    }

    // Destruction des elements
    for( int i=0; i < element_max; i++) {
        delete elt[i];
    }

}

int main(void)
{
    cout << "Test statique:" << endl;
    static_test();

    cout << "\nTest dynamique:\n";
    dynamic_test();

    return EXIT_SUCCESS;
}

