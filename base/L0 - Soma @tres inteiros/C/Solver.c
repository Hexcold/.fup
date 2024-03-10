#include <stdio.h> 

int main()
{                           
    int primeiroNumero = 0; 
    int segundoNumero = 0;
    int terceiroNumero = 0;

    scanf("%d%d%d", &primeiroNumero, &segundoNumero, &terceiroNumero);
    printf("%d\n", primeiroNumero + segundoNumero + terceiroNumero); 

    return 0; 
}