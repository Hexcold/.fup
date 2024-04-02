// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int corteB = 0, corteT = 0;
    float ladoEsquerdo = 0, ladoDireito = 0;

    std::cin >> corteB >> corteT;

    ladoEsquerdo = ((corteB + corteT) * 70) / 2;
    ladoDireito = (((160 - corteB) + (160 - corteT)) * 70) / 2;

    if (ladoDireito == ladoEsquerdo)
    {
        std::cout << "0" << std::endl;
    }
    else if (ladoDireito < ladoEsquerdo)
    {
        std::cout << "1" << std::endl;
    }
    else
    {
        std::cout << "2" << std::endl;
    }

    return 0;
}