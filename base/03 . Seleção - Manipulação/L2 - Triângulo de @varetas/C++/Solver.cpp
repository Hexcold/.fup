// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;

    if ((a + b <= c) || (b + c <= a) || (a + c <= b))
    {
        std::cout << "False" << std::endl;
    }
    else
    {
        std::cout << "True" << std::endl;
    }

    return 0;
}