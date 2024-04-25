// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int numero01 = 0, numero02 = 0;

    std::cin >> numero01 >> numero02;

    if ((numero01 % 3 == 0 && numero02 % 3 == 0) || (numero01 % 5 == 0 && numero02 % 5 == 0))
        std::cout << "sim" << std::endl;
    else
        std::cout << "nao" << std::endl;

    return 0;
}