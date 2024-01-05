#include <iostream>
#include "semestr1.h"
void program7() {
    int N, d1, d2, d3;
    std::cout << "\n Is the sum of a 3-digit number even? \n Enter the number: ";
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
    if ((d1 + d2 + d3) % 2 == 0) {
        std::cout << " Yes ";
    } else {
        std::cout << " No ";
    }
}