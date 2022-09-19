#pragma once
#include <cstddef>

using namespace std;

class Element
{
private:
    int contenu;
    Element *next = NULL;

public:
    Element(int contenu);
    int getContenu();
    void setContenu(int contenu);
    void setNext(Element* next);
    Element* getNext();
    void print();
};
