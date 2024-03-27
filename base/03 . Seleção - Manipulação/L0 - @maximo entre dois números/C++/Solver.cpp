// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int numb1, numb2;

    std::cin >> numb1 >> numb2;

    if (numb1 > numb2) {
        std::cout << numb1 << std::endl;
    } else {
        std::cout << numb2 << std::endl;
    }

    return 0;
}