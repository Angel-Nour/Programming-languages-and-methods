#include <iostream>
#include "semestr1.h"
#include <ctime>
void program31() {
    int n, tm_h, tm_m, tm_z, tm_p, h, m;
    std::cout << "\n Enter number of classes: ";
    std::cin >> n;
    if (check()) return;
    std::cout << "\n Enter lesson start time: \n Hour: ";
    std::cin >> tm_h;
    if (check()) return;
    std::cout <<"\n Minute: ";
    std::cin >> tm_m;
    if (check()) return;
    std::cout << "\n Enter duration of the lesson :";
    std::cin >> tm_z;
    if (check()) return;
    std::cout << "\n Enter turn :";
    std::cin >> tm_p;
    if (check()) return;
    if(n <= 0 || tm_h < 0 || tm_h > 24 || tm_m < 0 || tm_m > 60 )
    {
        std::cout << "\nInput error!!!";
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        h = tm_h + (tm_m + tm_z) / 60;
        m = (tm_m + tm_z) % 60;
        if(tm_m < 10)
        {
            std::cout << i << ". " << tm_h << " : 0" << tm_m;
        }
        else
        {
            std::cout << i << ". " << tm_h << " : " << tm_m;
        }
        if(m < 10)
        {
            std::cout << " - " << h << " : 0" << m << "\n";
        }
        else
        {
            std::cout << " - " << h << " : " << m << "\n";
        }

        tm_h = h + (m + tm_p) / 60;
        tm_m = (m + tm_p) % 60;
        if(tm_m == 60)
        {
            tm_h++;
            tm_m = 0;
        }
    }



}