// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    char jogador01, jogador02;

    scanf("%c %c ", &jogador01, &jogador02);

    if (jogador01 == jogador02)
    {
        printf("empate\n");
    }
    else if ((jogador01 == 'R' && jogador02 == 'S') || (jogador01 == 'S' && jogador02 == 'P') || (jogador01 == 'P' && jogador02 == 'R'))
    {
        printf("jog1\n");
    }
    else
    {
        printf("jog2\n");
    }

    return 0;
}