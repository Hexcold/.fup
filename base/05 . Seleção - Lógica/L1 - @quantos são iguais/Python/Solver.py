# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

value01 = int(input())
value02 = int(input())
value03 = int(input())

if value01 == value02 == value03:
    print(3)
elif value01 == value02 or value02 == value03 or value01 == value03:
    print(2)
else:
    print(0)