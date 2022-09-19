#include "Element.h"
#include <iostream>
#include <cstddef>

using namespace std;

Element::Element(int contenu)
{
    this->contenu = contenu;
}

int Element::getContenu()
{
    return this->contenu;
}

void Element::setContenu(int contenu)
{
    this->contenu = contenu;
}

void Element::setNext(Element* next)
{
    this->next = next;
}

Element* Element::getNext()
{
    return(this->next);
}

void Element::print()
{
    cout << "=== Element =========" << endl;
    cout << "contenu : " << this->contenu << endl;
    cout << "next : " << this->next << endl;
}
