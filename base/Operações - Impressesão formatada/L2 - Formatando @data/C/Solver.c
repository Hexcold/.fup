// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


#include <stdio.h> 

int main()
{   
    int hora = 0;
    int minuto = 0;                        
    int dia = 0; 
    int mes = 0;
    int ano = 0;

    scanf("%d %d %d %d %d", &hora, &minuto, &dia, &mes, &ano);
    printf("%.2d:%.2d %.2d/%.2d/%02d\n", hora, minuto, dia, mes, ano % 100); 

    return 0; 
}