#pragma once
#include <string>

using namespace std;

class ElementNomme
{
private:
    string nom = "";
    int contenu;

public:
    ElementNomme(int contenu);                  // Contructeur
    ElementNomme(string nom, int contenu);      // Contructeur alternatif
    void print();
};
