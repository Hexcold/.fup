# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

entrada = input()
hora = entrada

entrada = input()
minuto = entrada

entrada = input()
dia = entrada

entrada = input()
mes = entrada

entrada = input()
ano = entrada

print("%s:%s %s/%s/%s" % (hora.zfill(2  ), minuto.zfill(2), dia.zfill(2), mes.zfill(2), ano[-2:] ))