#include <iostream>
#include "semestr1.h"
void program34() {
    int k, F1 = 1, F2 = 1;
    std::cout << "\n Enter natural number k: ";
    std::cin >> k;
    if (check()) return;
    if (k <= 0) {
        std::cout << "\nInput error!!!";
        return;
    }
    if (k == 1) {
        std::cout << "1";
        return;
    }
    if (k == 2)
    {
        std::cout << "1 1";
        return;
    }
    std::cout << F1 << " " << F2;
    for(int i = 3; i <= k; i++)
    {
        int F = F1 + F2;
        std::cout << " "<< F;
        F1 = F2;
        F2 = F;
    }
}