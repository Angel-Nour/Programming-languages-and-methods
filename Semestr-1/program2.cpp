#include <iostream>
#include <limits>
#include <cmath>
#include "semestr1.h"

void program2() //сравнение двух натуральных чисел
{
    int a, b;
    std::cout << "\nThe program for two natural numbers.\nEnter terms separated by spaces: ";
    std::cin >> a;
    if(check()) return;
    std::cin >> b;
    if(check()) return;

    if (a == b) {
        std::cout << a << "=" << b;
    } else if (a > b) {
        std::cout << a << " > " << b;
    } else {
        std::cout << b << " > " << a;
    }
}