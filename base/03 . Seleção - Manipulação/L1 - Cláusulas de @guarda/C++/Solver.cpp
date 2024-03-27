// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int wifi = 0, login = 0, admin = 0;

    std::cin >> wifi >> login >> admin;

    if (wifi == 0)
    {
        std::cout << "you must connect to wifi" << std::endl;
    }
    else if ((login == 0))
    {
        std::cout << "you need to login first" << std::endl;
    }
    else if (admin == 0)
    {
        std::cout << "you must to login as admin" << std::endl;
    }
    else
    {
        std::cout << "done" << std::endl;
    }
    return 0;
}