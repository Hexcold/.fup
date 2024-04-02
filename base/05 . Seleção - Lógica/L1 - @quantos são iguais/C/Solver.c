// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int value01 = 0, value02 = 0, value03 = 0;

    scanf("%d %d %d", &value01, &value02, &value03);

    if (value01 == value02 && value02 == value03)
    {
        printf("3\n");
    }
    else if ((value01 == value02) || (value02 == value03) || (value03 == value01))
    {
        printf("2\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
