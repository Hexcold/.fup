// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int l = 0, r = 0, d = 0;

    std::cin >> l >> r >> d;

    if ((r > 50) && (l < r) && (r > d)) {
        std::cout << "S" << std::endl;
    } else {
        std::cout << "N" << std::endl;
    }
    return 0;
}