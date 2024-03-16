// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


#include <iostream>
#include <iomanip>

int main() {
    float primeiroNumero = 0;
    float segundoNumero = 0;

    std::cin >> primeiroNumero >> segundoNumero;
    std::cout << std::fixed << std::setprecision(1) << float((primeiroNumero + segundoNumero) / 2) << std::endl;

}