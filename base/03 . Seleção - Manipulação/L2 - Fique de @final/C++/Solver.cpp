// autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

// Repositório online: https://github.com/Hexcold
// Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

#include <iostream>

int main()
{
    int nota1 = 0, nota2 = 0;
    float notaFinal = 0;

    std::cin >> nota1 >> nota2 >> notaFinal;
    int media = (nota1 + nota2) / 2;

    if (media >= 7)
    {
        std::cout << "aprovado" << std::endl;
    }
    else if (media < 4)
    {
        std::cout << "reprovado" << std::endl;
    }
    else
    {
        float mediaFinal = (media + notaFinal) / 2;
        if (mediaFinal >= 5)
        {
            std::cout << "aprovado na final" << std::endl;
        }
        else
        {
            std::cout << "reprovado na final" << std::endl;
        }
    }
    return 0;
}