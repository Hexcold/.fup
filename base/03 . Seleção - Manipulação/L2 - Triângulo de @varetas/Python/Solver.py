# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

a = int(input())
b = int(input())
c = int(input())

if(a + b <= c) or (b + c <= a) or (c + a <= b) :
    print("False")
else:
    print("True")