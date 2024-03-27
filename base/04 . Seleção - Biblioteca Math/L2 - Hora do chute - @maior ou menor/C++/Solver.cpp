// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    float chute01 = 0, valorProduto = 0;
    char chute02;

    std::cin >> chute01 >> chute02 >> valorProduto;

    if ((chute01 == valorProduto) || (chute02 == 'm' && chute01 < valorProduto) || ((chute02 == 'M' && chute01 > valorProduto)))
    {
        std::cout << "primeiro" << std::endl;
    }
    else
    {
        std::cout << "segundo" << std::endl;
    }
    return 0;
}