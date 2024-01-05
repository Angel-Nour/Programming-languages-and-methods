#include <iostream>
#include "semestr1.h"
#include "string"

std::string Switch1(int c, std::string d){
    switch (c) {
        case 1:
            d= "I" + d;
            break;
        case 2:
            d= "II" + d;
            break;
        case 3:
            d= "III" + d;
            break;
        case 4:
            d= "IV" + d;
            break;
        case 5:
            d= "V" + d;
            break;
        case 6:
            d= "VI" + d;
            break;
        case 7:
            d= "VII" + d;
            break;
        case 8:
            d= "VIII" + d;
            break;
        case 9:
            d= "IX" + d;
            break;
    }
    return d;
}
std::string Switch2(int c, std::string d)
{
    switch (c) {
        case 1:
            d= "X" + d;
            break;
        case 2:
            d= "XX" + d;
            break;
        case 3:
            d= "XXX" + d;
            break;
        case 4:
            d= "XL" + d;
            break;
        case 5:
            d= "L" + d;
            break;
        case 6:
            d= "LX" + d;
            break;
        case 7:
            d= "LXX" + d;
            break;
        case 8:
            d= "LXXX" + d;
            break;
        case 9:
            d= "XC" + d;
            break;
    }
    return d;
}
std::string Switch3(int c, std::string d)
{
    switch (c){
        case 1:
            d= "C" + d;
            break;
        case 2:
            d= "CC" + d;
            break;
        case 3:
            d= "CCC" + d;
            break;
        case 4:
            d= "CD" + d;
            break;
        case 5:
            d= "D" + d;
            break;
        case 6:
            d= "DC" + d;
            break;
        case 7:
            d= "DCC" + d;
            break;
        case 8:
            d= "DCCC" + d;
            break;
        case 9:
            d= "CM" + d;
            break;
    }
    return d;
}
std::string Switch4(int c, std::string d)
{
    switch (c) {
        case 1:
            d= "M" + d;
            break;
        case 2:
            d= "MM" + d;
            break;
        case 3:
            d= "MMM" + d;
            break;
    }
    return d;
}
void program37(){
    int n, c;
    std::string d = "";
    std::cout <<"\nEnter number: ";
    std::cin >> n;
    if (check()) return;
    if (n <= 0 || n >= 4000) {
        std::cout << "\nInput error!!!";
        return;
    }
    for (int i = 1; i < 5 && n != 0; i++) {
         c= n % 10;
        switch (i) {
            case 1:
                d = Switch1(c, d);
                break;
            case 2:
               d = Switch2(c, d);
                break;
            case 3:
                d = Switch3(c, d);
                break;
            case 4:
                d = Switch4(c, d);
                break;
        }
        n /= 10;
    }
    std::cout << d;
}