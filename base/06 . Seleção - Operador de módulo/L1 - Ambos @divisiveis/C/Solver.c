// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int numero01 = 0, numero02 = 0;

    scanf("%d %d", &numero01, &numero02);

    if ((numero01 % 3 == 0 && numero02 % 3 == 0) || (numero01 % 5 == 0 && numero02 % 5 == 0))
        printf("sim\n");
    else
        printf("nao\n");

    return 0;
}