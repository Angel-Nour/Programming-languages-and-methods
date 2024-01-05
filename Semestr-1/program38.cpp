#include <iostream>
#include "semestr1.h"
void program38() {
    for ( int i=1; i<=9;i++)
    {
        std::cout << " \n";
        for (int j = 1; j <= 9; j++)
        {
            std::cout << j * i << " ";
            std::cout.width(3);
        }
    }
}