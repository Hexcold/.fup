# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

numero01 = int(input())
numero02 = int(input())
tipo = input()

if tipo == "+":
    print(numero01 + numero02)
elif tipo == "-":
    print(numero01 - numero02)
elif tipo == "*":
    print(numero01 * numero02)
else:
    print(int(numero01 / numero02))