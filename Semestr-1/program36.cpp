#include <iostream>
#include "semestr1.h"
#include <stop_token>
#include <chrono>
void program36()
{
    int n, n1, n2, k = 0;
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    for(int i = 0; i < 10; i++)
    {
        n1 = rand() % 8 + 2;
        n2 = rand() % 8 + 2;
        std::cout << "\n" << n1 << " x " << n2 << " = ";
        std::cin >> n;
        if (check()) return;
        if (n1 * n2 == n)
        {
            k++;
        }
    }
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    std::cout << "Lead time(s) = " << std::chrono::duration_cast<std::chrono::microseconds>((end - begin)/1000000).count()<<"\n" << std::endl;
    if (k == 10)
    {
        std::cout << "Great";
    }
    if (k == 9)
    {
        std::cout << "Good";
    }
    if (k == 8 || k == 7 )
    {
        std::cout << "Satisfies";
    }
    if (k < 7)
    {
        std::cout << "Dissatisfying";
    }

}