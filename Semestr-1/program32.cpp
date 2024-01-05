#include <iostream>
#include "semestr1.h"
void program32() {
    int n;
    std::cout << "\n Enter natural number : ";
    std::cin >> n;
    if (check()) return;
    if(n <= 0)
    {
        std::cout << "\nInput error!!!";
        return;
    }
    if (n < 3)
    {
        std::cout << "There are no prime numbers less then a given number";
        return;
    }
    std::cout << "All prime numbers are less then a given number: \n";
    for(int i = 2; i < n; i++)
    {
        bool f = 0;
        for(int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            std::cout << i << " ";
        }
    }
}
