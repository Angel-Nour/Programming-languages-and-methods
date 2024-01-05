#include <iostream>
#include <cmath>
#include "semestr1.h"
void program33() {
    int n, f = 1;
    double x, S = 0;
    std::cout << " S = x - x^3 / 3! + x^5 / 5! - ... + x^n / n!";
    std::cout << "\n Enter natural number n: ";
    std::cin >> n;
    if (check()) return;
    if (n <= 0) {
        std::cout << "\nInput error!!!";
        return;
    }
    std::cout <<"Enter irrational number x: ";
    std::cin >> x;
    if (check()) return;

    double  b = 1;
    for(int i = 1; i <= n; i+=2)
    {
        for(int j = 1; j <= i; j++)
        {
            f *= j;
        }
        S += b * (pow(x, i)/f);
        b *= -1;
        f = 1;
    }
    std::cout << "S= " << S;
}
