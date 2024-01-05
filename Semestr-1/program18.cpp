#include <iostream>
#include "semestr1.h"
void program18() {
    int izm;
    double d;
    std::cout << " \nEnter number according to unit of measurement (1-km, 2-m, 3-dm, 4-cm, 5-mm):  \n";
    std::cin >> izm;
    if(check()) return;
    std::cout << "Enter lenght: ";
    std::cin >> d;
    if(check()) return;
    if (izm < 1 || izm > 5 || d < 0) {
        std::cout << "\nInput error!!!";
        return;
    }
    if (izm == 1) {
        std::cout << d << "km = " << d * 1000 << "m";
    }
    if (izm == 2) {
        std::cout << d << "m = " << d << "m";
    }
    if (izm == 3) {
        std::cout << d << "dm = " << d / 10 << "m";
    }
    if (izm == 4) {
        std::cout << d << "cm = " << d / 100 << "m";
    }
    if (izm == 5) {
        std::cout << d << "mm = " << d / 1000 << "m";
    }
}
