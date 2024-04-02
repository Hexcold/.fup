// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int corteB = 0, corteT = 0;
    float ladoEsquerdo = 0, ladoDireito = 0;

    scanf("%d %d", &corteB, &corteT);

    ladoEsquerdo = ((corteB + corteT) * 70) / 2;
    ladoDireito = (((160 - corteB) + (160 - corteT)) * 70) / 2;

    if (ladoDireito == ladoEsquerdo)
    {
        printf("0\n");
    }
    else if (ladoDireito < ladoEsquerdo)
    {
        printf("1\n");
    }
    else
    {
        printf("2\n");
    }

    return 0;
}