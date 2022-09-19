#ifndef _FIFO_H
#define _FIFO_H

#define FIFO_MAX 10

using namespace std;

class Fifo
{
private:
    int data[FIFO_MAX];
    int index_in;
    int index_out;
    int item_count;     // Nombre d'items
    int capacity;   // capacité maximale de la file

public:
    Fifo(void);
    void enqueue(int item);
    int dequeue(void);
    int count();
    void dump(void);
private:
    int increment(int index);
};

#endif