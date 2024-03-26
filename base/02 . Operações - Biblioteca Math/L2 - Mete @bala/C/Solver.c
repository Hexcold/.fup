// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


#include <stdio.h>
#include <math.h>

int main() {
    float x01 = 0, y01 = 0, x02 = 0, y02 = 0;

    scanf("%f %f %f %f", &x01, &y01, &x02, &y02);

    printf("%.2f\n", sqrt(pow((x02 - x01), 2) + pow((y02 - y01), 2)));
}