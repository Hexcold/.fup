// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>
#include <cmath>

int main()
{
    char tipo;
    float numero = 0;

    std::cin >> tipo >> numero;

    if (tipo == 'r')
    {
        std::cout << round(numero) << std::endl;
    }
    else if (tipo == 'c')
    {
        std::cout << ceil(numero) << std::endl;
    }
    else
    {
        std::cout << floor(numero) << std::endl;
    }

    return 0;
}