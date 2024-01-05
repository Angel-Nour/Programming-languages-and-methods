#include <iostream>
#include "semestr1.h"
void program19() {
    int N, n;

    std::cout << "\nEnter number of years of interest:   ";
    std::cin >> N;
    if(check()) return;
    if (N < 0 || N > 200) {
        std::cout << "\nInput error!!!";
        return;
    }
    if ((N >= 11 && N <= 14) || (N >= 111 && N <= 114)) {
        std::cout << "Emu " << N << " let";
    } else {
        n = N % 10;
        if (n == 0 || (n >= 5 && n <= 9)) {
            std::cout << "Emu " << N << " let";
        }
        if (n == 1) {
            std::cout << "Emu " << N << " god";
        }
        if (n >= 2 && n <= 4) {
            std::cout << "Emu " << N << " goda";
        }
    }
}
