# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md

entrada = input() #Recebe os valores do usuário e armazena em “entrada” (os valores devem entrar com espaço) Ex: 115 15
entrada = entrada.split() #A função “split()” separa os números por meio dos espaços dados e armazena novamente em entrada em forma de array (primeiro espaço é “0” e segundo é “1”)

primeiroNumero = int(entrada[0]) #Armazena na variável “primeiroNumero” o valor da primeira casa do nosso vetor (array), neste caso é "0". Além de transformar em inteiro, por meio da função “int()”
segundoNumero = int(entrada[1]) #Armazena na variável “segundoNumero” o valor da primeira casa do nosso vetor (array), neste caso é “1”. Além de transformar em inteiro, por meio da função “int()”


print(int(primeiroNumero / segundoNumero), primeiroNumero % segundoNumero) #Apresenta no terminal, usando a função print(), o quociente e o resto da divisão. A virgula é usada para poder printar tudo na mesma linha.
