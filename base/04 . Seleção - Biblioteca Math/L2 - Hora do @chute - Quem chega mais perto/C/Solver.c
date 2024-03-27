// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int valorProduto = 0, chute01 = 0, chute02 = 0;

    scanf("%d %d %d", &valorProduto, &chute01, &chute02);

    chute01 = abs(chute01 - valorProduto);
    chute02 = abs(chute02 - valorProduto);

    if (chute01 < chute02)
    {
        printf("primeiro\n");
    }
    else if (chute02 < chute01)
    {
        printf("segundo\n");
    }
    else
    {
        printf("empate\n");
    }
    return 0;
}