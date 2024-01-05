#include <iostream>
#include "semestr1.h"
void program6() {
    int N, c, d1, d2, d3, d4;
    std::cout << "\n Is there the correct number in the figure? \n Enter a 4-digit number: ";
    std::cin >> N;
    if(check()) return;
    std::cout << "Enter a figure: ";
    std::cin >> c;
    if(check()) return;
    N = abs(N);
    if (N < 1000 || N > 9999) {
        std::cout << "\nNot a 4-digit number";
        return;
    }
    if (c < 0 || c > 9) {
        std::cout << "\nInput error!!!";
        return;
    }
    d4 = N % 10;
    d3 = (N % 100) / 10;
    d2 = (N / 100) % 10;
    d1 = N / 1000;
    if (c == d1 || c == d2 || c == d3 || c == d4) {
        std::cout << " Yes ";
    } else
        std::cout << " No ";
}
