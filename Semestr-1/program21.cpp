#include <iostream>
#include "semestr1.h"
void program21() {
    long number;
    int kol = 0;
    std::cout << "\nEnter number:   ";
    std::cin >> number;
    if(check()) return;
    number = abs(number);
    if (number == 0)
    {
        std::cout << "In number " << 1 << " digits";
    }
    else {
        while (number > 0) {
            number /= 10;
            kol++;
        }
        std::cout << "In number " << kol << " digits";
    }
}
