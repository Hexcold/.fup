# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


import math

tipo = input()
numero = float(input())

if tipo == "r":
    print(round(numero))
elif tipo == "f":
    print(math.floor(numero))
else:
    print(math.ceil(numero))