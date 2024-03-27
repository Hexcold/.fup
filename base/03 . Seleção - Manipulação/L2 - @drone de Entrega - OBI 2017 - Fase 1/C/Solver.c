// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int a, b, c, h, l;

    scanf("%d %d %d %d %d", &a, &b, &c, &h, &l);

    if (((a <= h && b <= l) || (b <= h && a <= l)) || ((b <= h && c <= l) || (c <= h && b <= l)) || ((a <= h && c <= l) || (c <= h && a <= l)))
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }

    return 0;
}