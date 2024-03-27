// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int numero = 0;
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("+\n");
    }
    else if (numero < 0)
    {
        printf("-\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}