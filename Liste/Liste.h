#pragma once
#include "Element.h"
#include <cstddef>

using namespace std;

class Liste
{
private:
    Element* premier = NULL;    // premier element de la liste
    int item_count;             // nombre d'elements

    Element* curseur = NULL;    // Curseur
    int curseur_pos = 0;        // position curseur
public:
    Liste();
    // Premier elment
    void setPremier(Element* premier);
    Element* getPremier();
    // gestion du curseur
    void clearCurseur();
    int gotoCurseur(int position);
    int getCurseurPos();
    Element* getCurseur();
    // Ajouter un element
    void ajouter_debut( int contenu );
    void ajouter_curseur( int contenu );
    // Affichage
    void print();
};
