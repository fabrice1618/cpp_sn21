#include <iostream>
#include "Lifo.h"

using namespace std;

int main(void)
{
    Lifo ma_pile;

    ma_pile.push(10);
    ma_pile.push(15);
    ma_pile.dump();

    return EXIT_SUCCESS;
}