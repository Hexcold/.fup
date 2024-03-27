// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int comp01 = 0, larg01 = 0, comp02 = 0, larg02 = 0;

    std::cin >> comp01 >> larg01 >> comp02 >> larg02;

    int area01 = comp01 * larg01;
    int area02 = comp02 * larg02;

    if (area01 > area02) {
        std::cout << area01 << std::endl;
    } else {
        std::cout << area02 << std::endl;
    }
    return 0;
}