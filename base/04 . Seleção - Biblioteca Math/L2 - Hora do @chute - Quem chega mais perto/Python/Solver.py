# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

valorProduto = int(input())
chute01 = int(input())
chute02 = int(input())

chute01 = abs(chute01 - valorProduto)
chute02 = abs(chute02 - valorProduto)

if chute01 < chute02:
    print("primeiro")
elif chute02 < chute01:
    print("segundo")
else:
    print("empate")