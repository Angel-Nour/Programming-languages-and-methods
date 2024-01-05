#include <iostream>
#include "semestr1.h"
void program29()
{
    std:: string t, n;
    std::cout << "\n";

    for(int i = 1; i < 9; i++)
    {
        for(int j = 1; j < 9; j++)
        {
            if( (i+j) % 2 == 0)
            {
                n = " * ";
            }
            else
            {
                n = "   ";
            }
            if ( j < 8)
            {
                t = "";
            }
            else
            {
                t = '\n';
            }
            std::cout << n << t ;
        }
    }
}
