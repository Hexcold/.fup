# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

numero01 = int(input())
numero02 = int(input())

if (numero01 % 3 == 0  and numero02 % 3 == 0) or (numero01 % 5 == 0 and numero02 % 5 == 0):
    print("sim")
else: 
    print("nao")  