// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int numero = 0;

    std::cin >> numero;

    if (numero % 7 == 0)
    {
        std::cout << "SIM" << std::endl;
    }
    else
    {
        std::cout << "NAO" << std::endl;
    }
    return 0;
}