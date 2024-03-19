// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>
#include <iomanip> 

int main()
{
    int hora = 0;
    int minuto = 0;
    int dia = 0;
    int mes = 0;
    int ano = 0;

    std::cin >> hora >> minuto >> dia >> mes >> ano;

    std::cout << std::setfill('0') << std::setw(2) << hora << ":" << std::setw(2) << minuto << " " << std::setw(2) << dia << "/" << std::setw(2) << mes << "/" << ano % 100 << std::endl;

    return 0;
}