#include "Liste.h"
#include <iostream>
#include <cstddef>

using namespace std;

Liste::Liste()
{
    this->item_count = 0;
}

void Liste::setPremier(Element* premier)
{
    this->premier = premier;
}

Element* Liste::getPremier()
{
    return(this->premier);
}

void Liste::clearCurseur()
{
    this->curseur = NULL;
    this->curseur_pos = 0;
}

// Positionnement sequentiel du curseur
int Liste::gotoCurseur(int position)
{
    Element* p = NULL;
    int p_pos = 0;

    if (this->premier == NULL) {
        // Liste vide
        return(0);
    }

    p = this->premier;
    p_pos = 1;

    while ((p->getNext() != NULL) && (p_pos < position)) {
        p = p->getNext();
        p_pos++;
    }

    this->curseur = p;
    this->curseur_pos = p_pos;

    return( this->curseur_pos);
}

int Liste::getCurseurPos()
{
    return(this->curseur_pos);
}

Element* Liste::getCurseur()
{
    return(this->curseur);
}

void Liste::ajouter_debut( int contenu )
{
    Element* elt;
    Element* premier_liste = getPremier();

    elt = new Element( contenu );
    elt->setNext(premier_liste);
    this->setPremier(elt);

    this->item_count++;
}

void Liste::ajouter_curseur( int contenu )
{
    Element* elt;
    Element* p = getCurseur();

    elt = new Element( contenu );
    elt->setNext( p->getNext() );
    p->setNext(elt);

    this->item_count++;
}

void Liste::print()
{
    Element* p;

    cout << "=== Liste ===========" << endl;
    cout << "premier : " << this->premier << endl;
    cout << "item_count : " << this->item_count << endl;
    cout << "curseur : " << this->curseur << endl;
    cout << "curseur_pos : " << this->curseur_pos << endl;

    if (this->premier == NULL) {
        cout << "Liste vide" << endl;
    } else {
        p = this->premier;
        do {
            p->print();
            p = p->getNext();
        } while (p != NULL);
    }

    cout << "=====================" << endl;
}
