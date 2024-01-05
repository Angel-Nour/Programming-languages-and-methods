#include <iostream>
#include "semestr1.h"
void program25()
{
    int n;
    std::cout << "\n Enter number: ";
    std::cin >> n;
    if(check()) return;
    /* for (int a = 1; a <= 9; a++)
     {
         for (int b = 0; b <= 9; b++)
         {
             for (int c = 0; c <= 9; c++)
             {
                 if ((a + b + c) < n)
                 {
                     std::cout << " " << a * 100 + b * 10 + c;
                 }
             }

         }
     } */
    if (n < 2)
    {
        std::cout << "There is no three-digit number whose digits add up to less";
    }
    for (int i = 100; i < 1000; i++)
    {   int d3 = i % 10;
        int d2 = (i % 100) / 10;
        int d1 = i / 100;
        if (d1 + d2 + d3 < n)  {
            std::cout << " " << i;  }
    }
}