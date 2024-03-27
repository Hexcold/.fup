// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>
#include <math.h>

int main()
{
    char tipo;
    float numero = 0;

    scanf("%c %f", &tipo, &numero);

    if (tipo == 'r')
    {
        printf("%d\n", (int)round(numero));
    }
    else if (tipo == 'c')
    {
        printf("%d\n", (int)ceil(numero));
    }
    else
    {
        printf("%d\n", (int)floor(numero));
    }

    return 0;
}