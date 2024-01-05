#include <iostream>
#include <cmath>
#include "semestr1.h"
void program39() {
    int  k;
   /* double km = 1, m = 0.6214, km1 = 1; */
    std::cout << "Enter number: ";
    std::cin >> k;
    std::cout << "\n";
    if (check()) return;
    /*while (km1 <= k) {
        if (fmod(m, 1) == 0) {
            std::cout << m << "\t" << m / 0.6214 << "\n";
            km++;
            m = km * 0.6214;
        }
        else
        {
            std::cout << 0.6214 * km1 << "\t" << km1 << "\n";
            m = km1;
            km1++;
        }
    }
} */
   double m = 0.6214;
   int km=0;
   std::cout << "Mile\tKm\n";
    while (km < k)
    {
        if(floor((km + 1) * 0.6214) > floor(m))
        {
            m = floor(m);
            m++;
            std::cout << m << "\t" << m / 0.6214<<"\n";

        }
        else
        {
            km++;
            std::cout << km * 0.6214 << "\t" << km<<"\n";
        }
    }
    }
