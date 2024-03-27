// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int a, b, c, h, l;

    std::cin >> a >> b >> c >> h >> l;

    if (((a <= h && b <= l) || (b <= h && a <= l)) || ((b <= h && c <= l) || (c <= h && b <= l)) || ((a <= h && c <= l) || (c <= h && a <= l)))
    {
        std::cout << "S" << std::endl;
    }
    else
    {
        std::cout << "N" << std::endl;
    }

    return 0;
}