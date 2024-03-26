// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>
#include <math.h>

// erroooooooooooooo
int main()
{
    float valorTv = 0, valorTotal = 0;
    int parcela = 0;

    scanf("%f %d", &valorTv, &parcela);

    valorTotal = valorTv + (valorTv * (parcela - 1) * 0.05);

    printf("%.2f\n%.2f\n", valorTotal/2, valorTotal);

    return 0;
}