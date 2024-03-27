// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int numb01, numb02;
    char tipo;

    std::cin >> numb01 >> numb02 >> tipo;

    if (tipo == '+')
    {
        std::cout << numb01 + numb02 << std::endl;
    }
    else if (tipo == '-')
    {
        std::cout << numb01 - numb02 << std::endl;
    }
    else if (tipo == '*')
    {
        std::cout << numb01 * numb02 << std::endl;
    }
    else
    {
        std::cout << numb01 / numb02 << std::endl;
    }

    return 0;
}