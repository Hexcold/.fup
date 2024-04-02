// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    float a = 0, g = 0, rA = 0, rG = 0;

    std::cin >> a >> g >> rA >> rG;

    if (a / rA < g / rG)
    {
        std::cout << "A" << std::endl;
    }
    else
    {
        std::cout << "G" << std::endl;
    }
    return 0;
}