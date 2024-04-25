// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main() {
    int n, m = 0, aux;
    scanf("%d", &n);
    aux = n;

    while (n != 0) {
        m = m * 10 + n % 10;
        n = n / 10;
    }

    printf("%d", int(aux == m))

    return 0;
}