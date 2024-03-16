// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


#include <iostream>
#include <iomanip>

int main() {
    float celsius = 0;

    std::cin >> celsius;
    std::cout << std::fixed << std::setprecision(6) << 1.8 * celsius + 32 << std::endl;
    return 0;
}