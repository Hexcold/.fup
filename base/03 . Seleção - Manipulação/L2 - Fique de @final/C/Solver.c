// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int nota1 = 0, nota2 = 0;
    float notaFinal = 0;

    scanf("%d %d %f", &nota1, &nota2, &notaFinal);
    int media = (nota1 + nota2) / 2;

    if (media >= 7)
    {
        printf("aprovado\n");
    }
    else if (media < 4)
    {
        printf("reprovado\n");
    }
    else
    {
        float mediaFinal = (media + notaFinal) / 2;
        if (mediaFinal >= 5)
        {
            printf("aprovado na final\n");
        }
        else
        {
            printf("reprovado na final\n");
        }
    }
    return 0;
}