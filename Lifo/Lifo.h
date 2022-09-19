#ifndef _LIFO_H
#define _LIFO_H

#define LIFO_MAX 10

using namespace std;

class Lifo
{
private:
    int data[LIFO_MAX];
    int index;
    int capacity;   // capacité maximale de la pile
    int item_count;

public:
    Lifo(void);
    void push(int val);
    int pop(void);
    void dump(void);
};

#endif