# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

produto1 = int(input())
produto2 = int(input())
produto3 = int(input())

valor1 = float(input())
valor2 = float(input())
valor3 = float(input())

dinheiro = float(input())

print("{:.2f}".format(dinheiro - ((produto1 * valor1) + (produto2 * valor2) + (produto3 * valor3))))