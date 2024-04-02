# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

jog1 = int(input())
jog2 = int(input())
jog3 = int(input())

if jog1 == jog2 == jog3:
    print("empate")
elif jog1 == jog2 != jog3:
    print("jog3")
elif jog1 == jog3 != jog2:
    print("jog2")
else:
    print("jog1")