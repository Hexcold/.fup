# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

corteB = int(input())
corteT = int(input())

ladoEsquerdo = ((corteB + corteT) * 70)/2
ladoDireito = ((( 160 - corteB) + (160 - corteT)) * 70)/2

if ladoDireito == ladoEsquerdo:
    print("0")
elif ladoDireito < ladoEsquerdo:
    print("1")
else:
    print("2")