// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta;

    scanf("%f %f %f", &a, &b, &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0)
    {
        printf("nao ha raiz real\n");
    }
    else if (delta == 0)
    {
        printf("%.2f\n", fabs(-b / (2 * a)));
    }
    else
    {
        printf("%.2f\n", (-b + sqrt(delta)) / (2 * a));
        printf("%.2f\n", (-b - sqrt(delta)) / (2 * a));
    }

    return 0;
}
