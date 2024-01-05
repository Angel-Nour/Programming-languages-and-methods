#include <iostream>
#include "semestr1.h"
void program23() {
    int cur, prev = 0, count = 0;
    std::cout << "Program for counting sign changes in a sequence ending in 0";
    do {
        std::cout << "\n Enter number: ";
        std::cin >> cur;
        if(check()) return;
        if (prev * cur < 0)
        {
            count++;
        }
        prev = cur;
    }
    while (cur != 0);
    std::cout << "number of sign changes: " << count;
}