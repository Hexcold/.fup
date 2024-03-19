// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


#include <iostream>
#include <iomanip>

int main() {
    int entradaSegundos = 0;
    int hora = 0, minuto = 0, segundo = 0;

    std::cin >> entradaSegundos;
    
    hora = entradaSegundos / 3600;
    minuto = (entradaSegundos - hora * 3600) / 60;
    segundo = (entradaSegundos - hora * 3600 - minuto * 60);

    std::cout << hora << ":" << minuto << ":" << segundo << std::endl;
    return 0;
}