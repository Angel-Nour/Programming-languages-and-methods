#include <iostream>
#include <limits>

int check() {
    if(std::cin.fail()){
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
    return 0;
}
