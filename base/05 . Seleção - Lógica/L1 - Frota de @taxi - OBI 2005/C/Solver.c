// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    float a = 0, g = 0, rA = 0, rG = 0;

    scanf("%f %f %f %f", &a, &g, &rA, &rG);

    if (a / rA < g / rG)
    {
        printf("A\n");
    }
    else
    {
        printf("G\n");
    }
    return 0;
}