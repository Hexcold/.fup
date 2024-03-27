# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

import math

a = float(input())
b = float(input())
c = float(input())

delta = pow(b, 2) - 4 * a * c

if delta < 0:
    print("nao ha raiz real")
elif delta == 0:
    print(f"{abs(-b / (2 * a)):.2f}")
else:
    print(f"{(-b + math.sqrt(delta))/(2*a):.2f}")
    print(f"{(-b - math.sqrt(delta))/(2*a):.2f}")