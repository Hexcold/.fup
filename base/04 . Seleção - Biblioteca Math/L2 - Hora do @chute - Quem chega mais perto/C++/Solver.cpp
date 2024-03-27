// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int valorProduto = 0, chute01 = 0, chute02 = 0;

    std::cin >> valorProduto >> chute01 >> chute02;

    chute01 = abs(chute01 - valorProduto);
    chute02 = abs(chute02 - valorProduto);

    if (chute01 < chute02)
    {
        std::cout << "primeiro" << std::endl;
    }
    else if (chute02 < chute01)
    {
        std::cout << "segundo" << std::endl;
    }
    else
    {
        std::cout << "empate" << std::endl;
    }
    return 0;
}