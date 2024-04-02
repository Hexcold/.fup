// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    char jogador01, jogador02;

    std::cin >> jogador01 >> jogador02;

    if (jogador01 == jogador02)
    {
        std::cout << "empate" << std::endl;
    }
    else if ((jogador01 == 'R' && jogador02 == 'S') || (jogador01 == 'S' && jogador02 == 'P') || (jogador01 == 'P' && jogador02 == 'R'))
    {
        std::cout << "jog1" << std::endl;
    }
    else
    {
        std::cout << "jog2" << std::endl;
    }

    return 0;
}