#include "Fifo.h"
#include <iostream>

using namespace std;

// Constructeur pour initialiser une file
Fifo::Fifo()
{
    capacity = FIFO_MAX;
    index_in = 0;
    index_out = 0;
    item_count = 0;

    for(int i = 0; i < FIFO_MAX; i++) {
        data[i] = -1;
    }
}
 
// retirer un élément de la file
int Fifo::dequeue()
{
    int item;

    if (item_count == 0) {
        cout << "Erreur la file est vide\n";
        exit(EXIT_FAILURE);
    }
 
    item = data[index_out];
    index_out = increment(index_out);
    item_count--;
 
    return item;
}
 
// ajouter un élément à la file
void Fifo::enqueue(int item)
{
    if (item_count == capacity) {
        cout << "Erreur la file est pleine\n";
        exit(EXIT_FAILURE);
    }
 
    data[index_in] = item;
    index_in = increment(index_in);
    item_count++;
}
 
// retourne la taille de la file
int Fifo::count() {
    return item_count;
}
 
void Fifo::dump(void)
{
    char curseur_index_in = ' ';
    char curseur_index_out = ' ';

    cout << "=== Dump file ===" << endl;
    cout << "taille file : " << item_count << endl << endl;

    for( int i = 0; i < FIFO_MAX; i++) {
        curseur_index_in = (index_in == i ? '>': ' ');
        curseur_index_out = (index_out == i ? '>': ' ');
        cout << curseur_index_in << ' ' << this->data[i] << ' ' << curseur_index_out << endl;
    }
    cout << "=================" << endl;
}

int Fifo::increment(int index)
{
    return (index + 1) % capacity;
}