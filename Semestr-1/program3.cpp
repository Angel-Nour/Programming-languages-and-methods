#include <iostream>
#include <limits>
#include <cmath>
#include "semestr1.h"
void program3() //максимальное из 3 чисел
{
    int a, b, c;

    std::cout << "\n The program for comparison max of 3 numbers. \nEnter 3  numbers:   ";
    std::cin >> a;
    if(check()) return;
    std::cin >> b;
    if(check()) return;
    std::cin >> c;
    if(check()) return;
    if (a == b && b == c) {
        std::cout << "\n all max";
    }
    if (a == b && a > c) {
        std::cout << "\n two identical max values: " << a << "and" << b;
    }
    if (a == c && a > b) {
        std::cout << "\n two identical max values: " << a << "and" << c;
    }
    if (c == b && c > a) {
        std::cout << "\n two identical max values: " << c << "and" << b;
    }
    if (a > b && a > c) {
        std::cout << "\n Max = " << a;
    }
    if (b > c && b > a) {
        std::cout << "\n Max = " << b;
    }
    if (c > a && c > b)
        std::cout << "\n Max = " << c;

}