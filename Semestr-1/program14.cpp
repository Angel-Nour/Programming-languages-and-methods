#include <iostream>
#include "semestr1.h"
void program14() {
    int a;

    std::cout << "\n Is the year a leap year? \nEnter year from the range [1600;2100]:   ";
    std::cin >> a;
    if(check()) return;

    if (a < 1600 || a > 2100) {
        std::cout << "\nInput error!!!";
        return;
    }
    if (a % 4 != 0 || a % 100 == 0 && a % 400 != 0) {
        std::cout << "not leap year";
    } else {
        std::cout << "leap year";
    }

}
