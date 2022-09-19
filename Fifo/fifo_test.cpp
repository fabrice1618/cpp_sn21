#include <iostream>
#include "Fifo.h"

using namespace std;

int main(void)
{
    Fifo ma_fifo;       // Creation de la file
 
    ma_fifo.enqueue(1);
    ma_fifo.enqueue(2);
    ma_fifo.enqueue(3);
    ma_fifo.dump();

    ma_fifo.dequeue();
    ma_fifo.dequeue();
    ma_fifo.dump();

    return EXIT_SUCCESS;
}