// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


#include <stdio.h> //Incluir a biblioteca “stdio.h”

int main()
{                           // Função main
    int primeiroNumero = 0; // Instanciando a variável “primeiroNumero”. O zero é para que não tenha lixo na variavel
    int segundoNumero = 0;  // Instanciando a variável “segundoNumero”. O zero é para que não tenha lixo na variavel

    scanf("%d%d", &primeiroNumero, &segundoNumero);                                    // Recebendo os dois números
    printf("%d %d\n", primeiroNumero / segundoNumero, primeiroNumero % segundoNumero); // Calculando o quociente e o resto. Apresentando os dois logo em seguida.

    return 0; // Fechado a função
}