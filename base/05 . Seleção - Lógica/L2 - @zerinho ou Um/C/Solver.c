// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int jog01 = 0, jog02 = 0, jog03 = 0;

    scanf("%d %d %d", &jog01, &jog02, &jog03);

    if (jog01 == jog02 && jog01 == jog03)
    {
        printf("empate\n");
    }
    else if (jog01 == jog02 && jog01 != jog03)
    {
        printf("jog3\n");
    }
    else if (jog01 == jog03 && jog01 != jog02)
    {
        printf("jog2\n");
    }
    else
    {
        printf("jog1\n");
    }

    return 0;
}