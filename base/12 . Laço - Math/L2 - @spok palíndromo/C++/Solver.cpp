// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main() {
    int numero, reverso = 0, original;

    scanf("%d", &numero);
    original = numero;
    
    while (numero != 0) {
        reverso = reverso * 10 + numero % 10;
        numero = numero / 10;
    }
    printf("%d\n", (int) original == reverso);

 return 0;
}