// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    float a, b, c, delta;

    std::cin >> a >> b >> c;

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0)
    {
        std::cout << "nao ha raiz real" << std::endl;
    }
    else if (delta == 0)
    {
        std::cout << std::fixed << std::setprecision(2) << fabs(-b / (2 * a)) << std::endl;
    }
    else
    {
        std::cout << std::fixed << std::setprecision(2) << (-b + sqrt(delta)) / (2 * a) << std::endl;
        std::cout << std::fixed << std::setprecision(2) << (-b - sqrt(delta)) / (2 * a) << std::endl;
    }

    return 0;
}