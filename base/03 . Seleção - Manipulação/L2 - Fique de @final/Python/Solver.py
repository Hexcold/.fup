# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

nota01 = int(input())
nota02 = int(input())
notaFinal = float(input())

media = (nota01 + nota02) / 2

if (media >= 7):
    print("aprovado")
elif (media < 4):
    print("reprovado")
else:
    mediaFInal = (media + notaFinal) / 2
    if mediaFInal >= 5:
        print("aprovado na final")
    else:
        print("reprovado na final")