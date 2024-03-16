// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


#include <stdio.h>

int main()
{                          
    int entradaSegudos = 0, hora = 0, minuto = 0, segundo = 0;
    scanf("%d", &entradaSegudos);

    hora = entradaSegudos / 3600;
    minuto = (entradaSegudos - hora * 3600) / 60;
    segundo = entradaSegudos - hora * 3600 - minuto * 60;

    printf("%d:%d:%d\n", hora, minuto, segundo);
    return 0;
}