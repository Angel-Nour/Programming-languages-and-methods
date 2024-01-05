#include <iostream>
#include "semestr1.h"
void program28()
{
    bool f, AllNumbers = 1;
    int n, b;
    std::cout << "\n Enter natural number: ";
    std::cin >> n;
    if(check()) return;
    if(n <= 0)
    {
        std::cout << "\nInput error!!!";
        return;
    }
    std::cout << "Numbers not included in the given number: ";
    for(int i = 0; i < 10; i++)
    {
        f = 0;
        int m = n;
        do {
            b = m % 10;
            m = m / 10;

            if (b == i) {
                f = 1;
                break;
            }
        }
        while (m > 0);
        if(f == 0)
        {
            std::cout << " " << i;
            AllNumbers = 0;
        }
    }
    if (AllNumbers == 1)
    {
        std::cout << "All included in the given number";
    }
}