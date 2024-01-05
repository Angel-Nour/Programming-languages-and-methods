#include <iostream>
#include <cmath>
#include "semestr1.h"
void program13() {
    int a, b, c;
    double d, x1, x2;

    std::cout << "\n Solving the equation: f(x)=ax^2+bx+c=0 \nEnter coefficients:   ";
    // проверка, что были введены числа
    std::cout << "\n a = ";
    std::cin >> a;
    if(check()) return;
    std::cout << "b = ";
    std::cin >> b;
    if(check()) return;
    std::cout << "c = ";
    std::cin >> c;
    if(check()) return;
    if (a == 0 && b == 0 && c == 0) {
        std::cout << "\nFor any values of x the function is valid";
        return;
    }
    if (a == 0 && b == 0 && c != 0 || a == 0) {
        std::cout << "There are no function roots";
        return;
    }
    d = b * b - 4 * a * c;
    if (d >= 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        std::cout << "\nx1 = " << x1;
        std::cout << "\nx2 = " << x2;
        std::cout << "\nf(x1)="/*<< a << "*" << x1 << "^2+" << b << "*" <<x1 << "+"<< c << "="*/
                  << a * x1 * x1 + b * x1 + c;
        std::cout << "\nf(x2)= "/*<< a << "*" << x2 << "^2+" << b << "*" <<x2 << "+"<< c << "="*/
                  << a * x2 * x2 + b * x2 + c;
    } else {
        std::cout << "\nnot real roots";
    }
}
