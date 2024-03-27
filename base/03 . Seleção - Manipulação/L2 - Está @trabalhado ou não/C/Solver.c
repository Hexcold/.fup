// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main() {
    int dia = 0, hora = 0, minuto = 0;

    scanf("%d %d %d", &dia, &hora, &minuto);

    if (dia >= 2 && dia <= 6) { 
        if ((hora == 8 && minuto >= 0) || (hora > 8 && hora < 12) || (hora >= 14 && hora < 18)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    } else if (dia == 7) { 
        if (hora == 8 && minuto >= 0) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
    } else { 
        printf("NAO\n");
    }

    return 0;
}


/*
essa questão tem problema, pois n precisa dos minutos

int main() //essa questão tem problema
{
    int dia = 0, hora = 0, minuto = 0;

    scanf("%d %d %d", &dia, &hora, &minuto);
    
    if((dia == 1) || (dia == 7 && (hora < 8 || hora >= 12)) || (dia > 1 && dia < 7 && ((hora >= 12 && hora <= 13 ) || hora < 8 || hora >= 18))){
        printf("NAO\n");
    } else {
        printf("SIM\n");
    }
    return 0;
}

*/