#include <iostream>
#include "semestr1.h"
void program15() {
    int a, m, cm;
    double mm;

    std::cout << "\n The program converts the number from inches to the metric system \nEnter inches: ";
    std::cin >> a;
    if(check()) return;
    if (a < 0) {
        std::cout << "\nInput error!!!";
        return;
    }

    m = a / 39.37;
    cm = (a * 25.4 - m * 1000) / 10;
    mm = a * 25.4 - m * 1000 - cm * 10;
    std::cout << a << " inches=" << m << "m " << cm << "cm " << mm << "mm";
}
