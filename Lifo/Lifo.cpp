#include "Lifo.h"
#include <iostream>

using namespace std;

Lifo::Lifo(void)
{
    index = 0;
    capacity = LIFO_MAX;
    item_count = 0;

    for(int i = 0; i < LIFO_MAX; i++) {
        data[i] = -1;
    }
}

void Lifo::push(int item)
{
    if (item_count == LIFO_MAX) {
        cout << "Erreur la pile est pleine" << endl;
        exit(EXIT_FAILURE);
    }

    data[index++] = item;
    item_count++;
}

int Lifo::pop(void)
{
    int item;

    if (item_count == 0) {
        cout << "Erreur la pile est vide" << endl;
        exit(EXIT_FAILURE);
    }

    item = data[--index];
    item_count--;

    return(item);
}

void Lifo::dump(void)
{
    cout << "=== Dump pile ===" << endl;
    cout << "taille pile : " << item_count << endl << endl;

    for( int i = 0; i < index; i++) {
        cout << "  " << this->data[i] << endl;
    }
    cout << '>' << endl;
    cout << "=================" << endl;
}
