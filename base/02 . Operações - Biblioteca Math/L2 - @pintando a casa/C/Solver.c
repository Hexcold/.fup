// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


#include <stdio.h>
#include <math.h>

int main() {
    float ladoA, ladoB, ladoC, p;

    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

    p = (ladoA + ladoB + ladoC) / 2;

    printf("%.2f\n", sqrt(p * (p - ladoA) * (p - ladoB) - (p - ladoC)));
    
    return 0;
}