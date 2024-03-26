# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

import math

ladoA = float(input())
ladoB = float(input())
ladoC = float(input())

p = (ladoA + ladoB + ladoC) / 2

print("{:.2f}".format(math.sqrt(p * (p - ladoA) * (p - ladoB) * (p - ladoC))))
