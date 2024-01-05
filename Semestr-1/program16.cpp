#include <iostream>
#include "semestr1.h"
void program16() {
    int s, m, h, x, y, z, d, s1, m1, h1;

    std::cout << " \nEnter time  ";
    // проверка, что были введены числа
    std::cout << "\nNow \n h = ";
    std::cin >> h;
    if(check()) return;
    std::cout << "m = ";
    std::cin >> m;
    if(check()) return;
    std::cout << "s = ";
    std::cin >> s;
    if(check()) return;
    std::cout << "\nThrough \n h = ";
    std::cin >> x;
    if(check()) return;
    std::cout << "m = ";
    std::cin >> y;
    if(check()) return;
    std::cout << "s = ";
    std::cin >> z;
    if(check()) return;

    if (h < 0 || m < 0 || s < 0 || x < 0 || y < 0 || z < 0 || h >= 24 || m >= 60 || s >= 60) {
        std::cout << "\nInput error!!!";
        return;
    }
    s1 = (s + z) % 60;
    m1 = (m + (s + z) / 60 + y) % 60;
    h1 = (h + (m + (s + z) / 60 + y) / 60 + x) % 24;
    d = (h + (m + y) / 60 + x) / 24;
    std::cout << d << " days  " << h1 << " hours  " << m1 << " minutes  " << s1 << " seconds  ";
}
