#include <iostream>
#include "semestr1.h"
void program24()
{
    srand(time(0));
    for (int i = 0; i < 3; i++)
    {
        double t = 0;
        std::cout << "\nSubsequence " << i + 1 << ": ";
        for (int j = 0; j < 10; j++)
        {
            int x;
            x = rand() % 10;   std::cout << " " << x;
            t += x;
        }
        std::cout << "\nAverage: " << t / 10;
    }
}
