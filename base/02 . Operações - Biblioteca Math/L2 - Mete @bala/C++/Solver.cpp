// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    float x01 = 0, y01 = 0, x02 = 0, y02 = 0;

    std::cin >> x01 >> y01 >> x02 >> y02;

    std::cout << std::fixed << std::setprecision(2) << sqrt(pow((x02 - x01), 2) + pow((y02 - y01), 2)) << std::endl;
}