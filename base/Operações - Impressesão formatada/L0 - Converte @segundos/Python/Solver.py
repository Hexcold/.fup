# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

entradaSegundos = int(input())

hora = int(entradaSegundos // 3600)
minuto = int((entradaSegundos - hora * 3600) / 60)
segundos = int(entradaSegundos - hora * 3600 - minuto * 60)

print("%s:%s:%s" % (hora, minuto, segundos));