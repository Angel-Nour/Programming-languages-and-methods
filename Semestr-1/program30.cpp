#include <iostream>
#include "semestr1.h"
void program30()
{
    int n;
    std::cout << "\n Enter natural number: ";
    std::cin >> n;
    if(check()) return;
    if(n <= 0)
    {
        std::cout << "\nInput error!!!";
        return;
    }
    std::cout << "\n";
    std:: string t, v;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            v = " * ";
            if ( j < n - 1)
            {
                t = "";
            }
            else
            {
                t = '\n';
            }
            std::cout << v << t ;
        }
    }
    std::cout << "\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (j == 0 || i == 0 || j == n-1 || i == n-1)
                v = " * ";
            else
                v = "   ";
            if ( j < n - 1)
            {
                t = "";
            }
            else
            {
                t = '\n';
            }
            std::cout << v << t ;
        }
    }
    std::cout << "\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if ( i == j || i > j)
                v = " * ";
            else
                v = "   ";
            if ( j < n - 1)
            {
                t = "";
            }
            else
            {
                t = '\n';
            }
            std::cout << v << t ;
        }
    }
    std::cout << "\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if ( i == j || i < j)
                v = " * ";
            else
                v = "   ";
            if ( j < n - 1)
            {
                t = "";
            }
            else
            {
                t = '\n';
            }
            std::cout << v << t ;
        }
    }
    std::cout << "\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if ( i + j == n - 1 || i < n - j)
                v = " * ";
            else
                v = "   ";
            if ( j < n - 1)
            {
                t = "";
            }
            else
            {
                t = '\n';
            }
            std::cout << v << t ;
        }
    }
    std::cout << "\n";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if ( i + j == n - 1 || i > n - j || i + j == n)
                v = " * ";
            else
                v = "   ";
            if ( j < n - 1)
            {
                t = "";
            }
            else
            {
                t = '\n';
            }
            std::cout << v << t ;
        }
    }
    std::cout <<"\n";
    for(int i = 0; i < n * 2 - 1; i++)
    {
        for(int j = 0; j < n * 2 - 1; j++) {
            if ((i + j <= n - 2) || (j >= i + n) || (i >= j + n) || (i + j > n * 3 - 3))
                std::cout << "   ";
            else
                std::cout << " * ";
        }
            std::cout << "\n";
    }
}
