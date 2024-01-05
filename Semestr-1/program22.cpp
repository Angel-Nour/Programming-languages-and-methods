#include <iostream>
#include "semestr1.h"
#include <cmath>
void program22() {
    float k, s, p;
    int kol = 0;
    std::cout << "\n Software for calculating capital \nEnter initial capital: ";
    std::cin >> k;
    if(check()) return;
    std::cout << " \nEnter required amount: ";
    std::cin >> s;
    if(check()) return;
    std::cout << "\n Enter % monthly profit: ";
    std::cin >> p;
    if(check()) return;
    if (k <= 0 || s < k || p <= 0) {
        std::cout << "\nInput error!!!";
        return;
    }
    int m = 1;
    while (k < s) {
        k += k * (p / 100);
        kol++;
        std::cout << "\n" << m << " Month "  << round (k*100)/100;
        m++;
    }
}