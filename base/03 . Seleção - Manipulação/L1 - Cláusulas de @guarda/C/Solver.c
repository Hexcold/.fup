// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <stdio.h>

int main()
{
    int wifi = 0, login = 0, admin = 0;

    scanf("%d %d %d", &wifi, &login, &admin);

    if (wifi == 0)
    {
        printf("you must connect to wifi\n");
    }
    else if ((login == 0))
    {
        printf("you need to login first\n");
    }
    else if (admin == 0)
    {
        printf("you must to login as admin\n");
    }
    else
    {
        printf("done\n");
    }
    return 0;
}