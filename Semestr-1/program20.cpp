#include <iostream>
#include "semestr1.h"
void program20() {
    double number1, number2;
    char sign;
    std::cout << "\nEnter number 1:   ";
    std::cin >> number1;
    if(check()) return;
    std::cout << "\nEnter number 2:  ";
    std::cin >> number2;
    if(check()) return;
    std::cout << "Enter operation sign:  ";
    std::cin >> sign;
    if (sign == '/' && number2 == 0) {
        std::cout << "Can't divide by zero";
    } else {
        switch (sign) {
            case '+':
                std::cout << number1 << " + " << number2 << " = " << number1 + number2 << std::endl;
                break;
            case '-':
                std::cout << number1 << " - " << number2 << " = " << number1 - number2 << std::endl;
                break;
            case '*':
                std::cout << number1 << " * " << number2 << " = " << number1 * number2 << std::endl;
                break;
            case '/':
                std::cout << number1 << " / " << number2 << " = " << number1 / number2 << std::endl;
                break;
        }
    }
}
