#include <iostream>
#include <limits>
#include <cmath>


int program1() //сложение двух натуральных чисел
{
    unsigned int a, b;

    std::cout << "\nThe program for adding two natural numbers.\nEnter terms separated by spaces: ";
    // проверка, что были введены числа
    if (!(std::cin >> a)) // извлечение не производилось
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 1;
    }
    if (!(std::cin >> b)) // извлечение не производилось
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 1;
    }
    if (std::cin.peek() != '\n') // извлечение не производилось
    {
        std::cerr << "\nInput error!!!" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 1;
    }
    // проверка, что были введены натуральные числа
    if (a < 1 || b < 1) {
        std::cout << "\nNot natural numbers!!!";
        return 1;
    }

    // проверка, что сумма поместится в int
    if ((std::cin.good() && UINT_MAX - b > a)) {
        std::cout << "Sum = " << a + b;
    } else {
        std::cout << "Sorry, result is too great";
    }
    return 0;
}