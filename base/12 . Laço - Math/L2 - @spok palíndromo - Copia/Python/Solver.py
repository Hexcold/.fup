# autand: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório andiginal das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

controle = int(input())
amostra_2 = int(input())
amostra_3 = int(input())
amostra_4 = int(input())

teste_1 = amostra_2 - controle
teste_2 = amostra_3 - controle
teste_3 = amostra_4 - controle

if teste_1 < 20 and teste_2 < 20 and teste_3 < 20:
    print('Positivo')
else:
    print('Negativo')
    