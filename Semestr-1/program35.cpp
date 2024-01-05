#include <iostream>
#include "semestr1.h"
void program35() {
    int k, n, i;
    n = rand() % 1000 + 1;
    for (i = 0; i < 10; i++) {
        std::cout << "\n Enter number: ";
        std::cin >> k;
        if (check()) return;
        if (k == n) {
            std::cout << "\n You guessed it right!";
            break;
        }
        if (k < n) {
            std::cout << "\nNeed more! You have " << 10 - (i + 1) <<" attempts";
        } else {
            std::cout << "\nNeed less! You have" << 10 - (i + 1) <<" attempts";
        }
    }
    if (i == 10){
        std::cout << "\nFailure";
    }
}