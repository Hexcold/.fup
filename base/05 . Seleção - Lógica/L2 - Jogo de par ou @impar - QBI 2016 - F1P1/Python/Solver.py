# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

p = int(input())
d_1 = int(input())
d_2 = int(input())

if p == 0:
    if (d_1 + d_2) % 2 == 0:
         print("0")
    else:
        print("1")
else:
    if (d_1 + d_2) % 2 == 0:
        print("1")
    else:
        print("0")