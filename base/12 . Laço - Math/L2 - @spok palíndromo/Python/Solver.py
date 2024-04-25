# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

def ehPalindromo(n):
    m = 0
    aux = n

    while n != 0:
        m = m * 10 + n % 10
        n = n // 10
    return aux == m;

print(int(ehPalindromo(int(input()))))

