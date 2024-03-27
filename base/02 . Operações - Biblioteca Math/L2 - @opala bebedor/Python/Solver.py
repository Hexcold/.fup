# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

velocidade = int(input())
tempoMinuto = int(input())
consumo = float(input())

print(f"{(velocidade * (tempoMinuto/60) / consumo):.2f}")