# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

chute01 = float(input())
chute02 = input()
valorProduto = float(input())

if(chute01 == valorProduto) or (chute02 == "m" and chute01 < valorProduto) or ((chute02 == "M" and chute01 > valorProduto)):
    print("primeiro")
else:
    print("segundo")