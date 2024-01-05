#include <iostream>
#include "semestr1.h"
void program26()
{
    for (int i = 100; i <= 999; i++)
    {
        int d3 = i % 10;
        int d2 = (i % 100) / 10;
        int d1 = i / 100;
        if (d1 == d2 || d2 == d3 || d1 == d3)
            if(d1 != d2 || d2 != d3 || d1 != d3)
                std::cout << i << " ";
    }
}
