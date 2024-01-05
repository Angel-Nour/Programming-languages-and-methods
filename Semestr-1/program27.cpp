#include <iostream>
#include "semestr1.h"
void program27()
{
    int x, y, min;
    std::cout << "\n Enter natural numerator: ";
    std::cin >> x;
    if(check()) return;
    std::cout << "\n Enter natural denominator: ";
    std::cin >> y;
    if(check()) return;
    if(x <= 0 || y <= 0)
    {
        std::cout << "\nInput error!!!";
        return;
    }
    if (x == y)
    {
        std::cout << x << "/" << y << "=" << 1;
        return;
    }
    if (x < y)
    {
        min = x;
    }
    else
    {
        min = y;
    }
    for (int i = min; i > 0; i--)
    {
        if(x % i == 0 && y % i == 0)
        {
            if(y / i == 1)
            {
                std::cout << x << "/" << y << "=" << x / i;
            }
            else
            {
                std::cout << x << "/" << y << "=" << x / i << "/" << y / i;
            }
            break;

        }
    }
}