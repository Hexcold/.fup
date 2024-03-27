// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>
#include <iomanip>

int main()
{
    float velocidade = 0, tempoMinuto = 0, consumo = 0;

    std::cin >> velocidade >> tempoMinuto >> consumo;
    std::cout << std::fixed << std::setprecision(2) << (velocidade * (tempoMinuto/60) / consumo) << std::endl;

    return 0;
}