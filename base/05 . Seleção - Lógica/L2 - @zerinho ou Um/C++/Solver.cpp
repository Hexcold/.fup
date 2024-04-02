// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int jog01 = 0, jog02 = 0, jog03 = 0;

    std::cin >> jog01 >> jog02 >> jog03;

    if (jog01 == jog02 && jog01 == jog03)
    {
        std::cout << "empate" << std::endl;
    }
    else if (jog01 == jog02 && jog01 != jog03)
    {
        std::cout << "jog3" << std::endl;
    }
    else if (jog01 == jog03 && jog01 != jog02)
    {
        std::cout << "jog2" << std::endl;
    }
    else
    {
        std::cout << "jog1" << std::endl;
    }

    return 0;
}