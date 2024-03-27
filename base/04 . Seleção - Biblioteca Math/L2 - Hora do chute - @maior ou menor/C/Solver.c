// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    float chute01 = 0, valorProduto = 0;
    char chute02;

    scanf("%f %c %f", &chute01, &chute02, &valorProduto);

    if ((chute01 == valorProduto) || (chute02 == 'm' && chute01 < valorProduto) || ((chute02 == 'M' && chute01 > valorProduto)))
    {
        printf("primeiro");
    }
    else
    {
        printf("segundo");
    }
    return 0;
}