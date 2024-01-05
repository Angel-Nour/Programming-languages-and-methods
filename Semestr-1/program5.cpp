#include <iostream>
#include "semestr1.h"
void program5() {
    int a;
    std::cout << "\n Calculating program: Is the number two digits and even? \n Enter the number: ";
    std::cin >> a;
    if(check()) return;
    if (a > -100 && a <= -10 && a % 2 == 0 || a >= 10 && a < 100 && a % 2 == 0) {
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }
}