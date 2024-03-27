// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b <= c) || (b + c <= a) || (a + c <= b))
    {
        printf("False\n");
    }
    else
    {
        printf("True\n");
    }

    return 0;
}