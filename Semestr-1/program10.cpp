#include <iostream>
#include "semestr1.h"
void program10() {
    int N, d1, d2, d3, d4;
    std::cout << "\n Are the digits of a number a sequence? \n Enter a 4-digit number: ";
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
    if (d1 == d2 && d3 == d4 && d2 == d4) {
        std::cout << "Constant";
    } else {
        if (d1 >= d2 && d2 >= d3 && d3 >= d4) {
            if (d1 > d2 && d2 > d3 && d3 > d4) {
                std::cout << "Descending";
            } else {
                std::cout << "Non-increasing";
            }
        } else if (d1 <= d2 && d2 <= d3 && d3 <= d4) {
            if (d1 < d2 && d2 < d3 && d3 < d4) {
                std::cout << "Increasing";
            } else {
                std::cout << "Non-decreasing";
            }
        } else {
            std::cout << "Does not form a sequence";
        }
    }
}