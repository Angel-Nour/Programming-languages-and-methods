#include <iostream>
#include "semestr1.h"
void program11() {
    int x, y, a, b, c;
    std::cout << "\nA program that determines whether a brick will fit into a hole.\nEnter terms separated by spaces: ";
    std::cin >> x;
    if(check()) return;
    std::cin >> y;
    if(check()) return;
    std::cout << "Enter brick dimensions: ";
    std::cin >> a;
    if(check()) return;
    std::cin >> b;
    if(check()) return;
    std::cin >> c;
    if(check()) return;
    if (a <= 0 || b <= 0 || c <= 0 || x <= 0 || y <= 0) {
        std::cout << "\nInput error!!!";
        return;
    }
    if (a >= b && a >= c) {
        if ((b < x && c < y) || (b < y && c < x))
            std::cout << "\n Yes ";
        else {
            std::cout << "\n No ";
        }
    } else if (b >= c && b >= a) {
        if ((a < x && c < y) || (a < y && c < x))
            std::cout << "\n Yes ";
        else {
            std::cout << "\n No ";
        }
    } else //if (c >= a && c >= b)
    {
        if ((a < x && b < y) || (a < y && b < x))
            std::cout << "\n Yes ";
        else {
            std::cout << "\n No ";
        }
    }
}