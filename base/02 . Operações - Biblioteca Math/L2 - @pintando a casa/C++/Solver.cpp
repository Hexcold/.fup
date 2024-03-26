// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    float ladoA, ladoB, ladoC, p;

    std::cin >> ladoA >> ladoB >> ladoC;

    p = (ladoA + ladoB + ladoC) / 2;

    std::cout << std::fixed << std::setprecision(2) << sqrt(p * (p - ladoA) * (p - ladoB) * (p - ladoC)) << std::endl; 

    return 0;
}