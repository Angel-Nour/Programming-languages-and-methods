#include <iostream>
#include "semestr1.h"
void program8() {
    int N, d1, d2, d3;
    std::cout << "\n How many identical digits are there in a number? \n Enter the number: ";
   std::cin >> N;
    if(check()) return;
    N = abs(N);
    if (N < 100 || N > 999) {
        std::cout << "\nNot a 3-digit number";
        return;
    }
    d1 = N / 100;
    d2 = (N / 10) % 10;
    d3 = N % 10;
    if (d1 == d2 && d1 == d3) {
        std::cout << " 3 ";
    } else if (d1 == d2 || d2 == d3 || d1 == d3) {
        std::cout << " 2 ";
    } else {
        std::cout << " 0 ";
    }
}