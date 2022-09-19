#include "ElementNomme.h"
#include <iostream>

using namespace std;

ElementNomme::ElementNomme(int contenu)
{
    this->contenu = contenu;
}

ElementNomme::ElementNomme(string nom, int contenu)
{
    this->nom = nom;
    this->contenu = contenu;
}

void ElementNomme::print()
{
    cout << "=== Element =========" << endl;
    cout << "nom : " << this->nom << endl;
    cout << "contenu : " << this->contenu << endl;
}
