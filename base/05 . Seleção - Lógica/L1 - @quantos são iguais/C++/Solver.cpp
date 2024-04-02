// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int value01 = 0, value02 = 0, value03 = 0;

    std::cin >> value01 >> value02 >> value03;

    if (value01 == value02 && value02 == value03)
    {
        std::cout << "3" << std::endl;
    }
    else if ((value01 == value02) || (value02 == value03) || (value03 == value01))
    {
        std::cout << "2" << std::endl;
    }
    else
    {
        std::cout << "0" << std::endl;
    }
    return 0;
}