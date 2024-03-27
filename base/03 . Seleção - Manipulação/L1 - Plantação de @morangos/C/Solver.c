// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int comp01 = 0, larg01 = 0, comp02 = 0, larg02 = 0;

    scanf("%d %d %d %d", &comp01, &larg01, &comp02, &larg02);

    int area01 = comp01 * larg01;
    int area02 = comp02 * larg02;

    if (area01 > area02)
    {
        printf("%d\n", area01);
    }
    else
    {
        printf("%d\n", area02);
    }
    return 0;
}