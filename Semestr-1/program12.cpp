#include <iostream>
#include "semestr1.h"
void program12() {
    int a, b, c;

    std::cout << "\n Program to calculate whether the lengths of the sides can be a triangle. \nEnter 3  numbers:   ";
    // проверка, что были введены числа
    std::cin >> a;
    if(check()) return;
    std::cin >> b;
    if(check()) return;
    std::cin >> c;
    if(check()) return;
    if (a <= 0 || b <= 0 || c <= 0) {
        std::cout << "\nInput error!!!";
        return;
    }
    if (a + b > c && b + c > a && c + a > b) {
        std::cout << "\nYes";
        if (a == b && a == c) {
            std::cout << "\n equilateral";
        } else if (a != b && b != c && c != a) {
            std::cout << "\nversatile";
        } else {
            std::cout << "\nisosceles";
        }
        if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a) {
            std::cout << "\nrectangular";
        }
    } else {
        std::cout << "\nNo";
    }
}
