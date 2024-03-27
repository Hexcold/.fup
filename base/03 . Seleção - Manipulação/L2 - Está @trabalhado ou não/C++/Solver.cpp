// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main() {
    int dia, hora, minuto;

    std::cin >> dia >> hora >> minuto;

    if (dia >= 2 && dia <= 6) { 
        if ((hora == 8 && minuto >= 0) || (hora > 8 && hora < 12) || (hora >= 14 && hora < 18)) {
            std::cout << "SIM" << std::endl;
        } else {
            std::cout << "NAO" << std::endl;
        }
    } else if (dia == 7) { 
        if (hora == 8 && minuto >= 0) {
            std::cout << "SIM" << std::endl;
        } else {
            std::cout << "NAO" << std::endl;
        }
    } else { 
        std::cout << "NAO" << std::endl;
    }

    return 0;
}