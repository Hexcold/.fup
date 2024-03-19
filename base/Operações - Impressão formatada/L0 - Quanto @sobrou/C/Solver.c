// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int produto01 = 0, produto02 = 0, produto03 = 0;
    float valor01 = 0, valor02 = 0, valor03 = 0, dinheiro = 0;

    scanf("%d %d %d %f %f %f %f", &produto01, &produto02, &produto03, &valor01, &valor02, &valor03, &dinheiro);

    printf("%.2f", dinheiro - ((produto01 * valor01) + (produto02 * valor02) + (produto03 * valor03)));

    return 0;
}