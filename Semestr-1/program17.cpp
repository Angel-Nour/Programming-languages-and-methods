#include <iostream>
#include "semestr1.h"
void program17() {
    int s, m, h, x, y, z, d = 0, s1 = 0, m1 = 0, h1 = 0;
    std::cout << " \nEnter time  ";
    std::cout << "\nNow \n h = ";
    std::cin >> h;
    if(check()) return;
    std::cout << "m = ";
    std::cin >> m;
    if(check()) return;
    std::cout << "s = ";
    std::cin >> s;
    if(check()) return;
    std::cout << "\nThen \n h = ";
    std::cin >> x;
    if(check()) return;
    std::cout << "m = ";
    std::cin >> y;
    if(check()) return;
    std::cout << "s = ";
    std::cin >> z;
    if(check()) return;
    if (h < 0 || m < 0 || s < 0 || x < 0 || y < 0 || z < 0 || h >= 24 || m >= 60 || s >= 60 || x >= 24 || y >= 60 ||
        z >= 60) {
        std::cout << "\nInput error!!!";
        return;
    }
    if (h == x && m == y && s == z)
        d++;
    if (z < s) {
        s1 = 60 - s + z;
        y--;
    } else
        s1 = z - s;
    if (y < m) {
        m1 = 60 - m + y;
        x--;
    } else
        m1 = y - m;
    if (x < h) {
        h1 = 24 - h + x;
    } else if (x > h)
        h1 = x - h;

    std::cout << d << " days  " << h1 << " hours  " << m1 << " minutes  " << s1 << " seconds  ";
}
