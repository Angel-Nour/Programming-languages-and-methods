#include <iostream>
#include <limits>
#include <cmath>
#include "semestr1.h"
void program4() // max [min(a,b),min(c,d)
{
    int a, b, c, d, min1, min2;

    std::cout << "\n The program for comparison max [min(a,b),min(c,d). \n Enter 4 numbers:   ";
    std::cin >> a;
    if(check()) return;
    std::cin >> b;
    if(check()) return;
    std::cin >> c;
    if(check()) return;
    std::cin >> d;
    if(check()) return;
    if (a <= b) {
        min1 = a;
    } else {
        min1 = b;
    }
    if (c <= d) {
        min2 = c;
    } else {
        min2 = d;
    }
    if (min1 > min2) {
        std::cout << "from min: " << min1 << " and " << min2 << " Max = " << min1;
    } else if (min2 > min1) {
        std::cout << "from min: " << min1 << " and " << min2 << " Max = " << min2;
    } else {
        std::cout << "There is no Max of min: " << min1 << "=" << min2;
    }
}