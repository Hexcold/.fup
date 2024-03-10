// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


#include <stdio.h> 

int main()
{                           
    int primeiroNumero = 0; 
    int segundoNumero = 0;

    scanf("%d%d", &primeiroNumero, &segundoNumero);
    printf("%d\n", primeiroNumero / segundoNumero);
    printf("%d\n", primeiroNumero % segundoNumero);
    float resultado = primeiroNumero / segundoNumero;
    printf("%.2f\n", resultado); 

    return 0; 
}