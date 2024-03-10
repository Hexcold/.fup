// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


#include <iostream>
#include <iomanip>

int main()
{
    int primeiroNumero = 0;
    int segundoNumero = 0;

    std::cin >> primeiroNumero >> segundoNumero;

    std::cout << primeiroNumero / segundoNumero << std::endl;
    std::cout << primeiroNumero % segundoNumero << std::endl;
    std::cout << std::fixed << std::setprecision(2) << float(primeiroNumero / 
    segundoNumero) << std::endl; 

    return 0;
}