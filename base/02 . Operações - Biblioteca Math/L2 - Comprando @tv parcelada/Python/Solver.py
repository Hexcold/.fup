# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

valorTv = float(input())
parcela = int(input())

valorTotal = valorTv + (valorTv * (parcela - 1) * 0.05);

print("{:.2f}".format(valorTotal/parcela))
print("{:.2f}".format(valorTotal))