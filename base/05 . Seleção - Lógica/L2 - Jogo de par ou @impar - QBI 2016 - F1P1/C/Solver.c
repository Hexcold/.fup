// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int p = 0, d_1 = 0, d_2 = 0;

    scanf("%d %d %d ", &p, &d_1, &d_2);

    if (p == 0)
    {
        if ((d_1 + d_2) % 2 == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
        }
    }
    else
    {
        if ((d_1 + d_2) % 2 == 0)
        {
            printf("1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    return 0;
}