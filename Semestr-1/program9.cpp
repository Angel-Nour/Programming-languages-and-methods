#include <iostream>
#include "semestr1.h"
void program9() {
    int N, d1, d2, d3, d4;
    std::cout << "\n Is the number a palindrome? \n Enter a 4-digit number: ";
    std::cin >> N;
    if(check()) return;
    N = abs(N);
    if (N < 1000 || N > 9999) {
        std::cout << "\nNot a 4-digit number";
        return;
    }
    d4 = N % 10;
    d3 = (N % 100) / 10;
    d2 = (N / 100) % 10;
    d1 = N / 1000;
    if (d1 == d4 && d3 == d2) {
        std::cout << " Yes ";
    } else {
        std::cout << " No ";
    }
}