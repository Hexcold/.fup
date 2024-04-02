# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

jogador01 = input()
jogador02 = input()

if jogador01 == jogador02:
    print("empate")
elif (jogador01 == "R" and jogador02 == "S") or (jogador01 == "S" and jogador02 == "P") or (jogador01 == "P" and jogador02 == "R"):
    print("jog1")
else:
    print("jog2")
