// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    float velocidade = 0, tempoMinuto = 0, consumo = 0;

    scanf("%f %f %f", &velocidade, &tempoMinuto, &consumo);
    printf("%.2f\n", (velocidade * (tempoMinuto / 60) / consumo));

    return 0;
}