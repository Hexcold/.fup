// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int l = 0, r = 0, d = 0;

    scanf("%d %d %d", &l, &r, &d);

    if ((r > 50) && (l < r) && (r > d))
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    return 0;
}