// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int numb01, numb02;
    char tipo;

    scanf("%d%d %c", &numb01, &numb02, &tipo);

    if (tipo == '+')
    {
        printf("%d\n", numb01 + numb02);
    }
    else if (tipo == '-')
    {
        printf("%d\n", numb01 - numb02);
    }
    else if (tipo == '*')
    {
        printf("%d\n", numb01 * numb02);
    }
    else
    {
        printf("%d\n", numb01 / numb02);
    }

    return 0;
}