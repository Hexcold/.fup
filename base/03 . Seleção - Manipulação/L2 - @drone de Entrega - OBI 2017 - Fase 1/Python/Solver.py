# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

a = int(input())
b = int(input())
c = int(input())
h = int(input())
l = int(input())

if ((a <= h and b <= l) or (b <= h and a <= l)) or ((b <= h and c <= l) or (c <= h and b <= l)) or ((a <= h and c <= l) or (c <= h and a <= l)):
    print("S")
else:
    print("N")