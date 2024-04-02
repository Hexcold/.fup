// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int p = 0, d_1 = 0, d_2 = 0;

    std::cin >> p >> d_1 >> d_2;

    if (p == 0)
    {
        if ((d_1 + d_2) % 2 == 0)
        {
            std::cout << "0" << std::endl;
        }
        else
        {
            std::cout << "1" << std::endl;
        }
    }
    else
    {
        if ((d_1 + d_2) % 2 == 0)
        {
            std::cout << "1" << std::endl;
        }
        else
        {
            std::cout << "0" << std::endl;
        }
    }
    return 0;
}