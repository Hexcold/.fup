# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

import math

posicaoN = int(input())
discoD = int(input())
aviaoA = int(input())

distancia = abs(discoD - aviaoA)
    
minimoApertado = math.ceil(distancia / (posicaoN - 1))
print(minimoApertado)   