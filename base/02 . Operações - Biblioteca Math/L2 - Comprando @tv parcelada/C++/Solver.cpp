// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    float valorTv = 0, valorTotal = 0;
    int parcela = 0;

    std::cin >> valorTv >> parcela;

    valorTotal = valorTv + (valorTv * (parcela - 1) * 0.05);

    std::cout << std::fixed << std::setprecision(2) << valorTotal / parcela << std::endl << std::fixed << std::setprecision(2) << valorTotal << std::endl; 

    return 0;
}