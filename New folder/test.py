entrada = int(input("Informe as horas em minutos: \n")) 

horas = entrada // 3600 #Dividimos o número total de segundos por 3600 para obter as horas.
entrada %= 3600 #Em seguida, usamos %= para calcular o resto da divisão por 3600 e atualizamos o valor de entrada.
minutos = entrada // 60 #Dividimos o valor atualizado de entrada por 60 para obter os minutos.
segundos = entrada % 60 #Finalmente, calculamos os segundos restantes usando % para o resto da divisão por 60.

print(horas)
print(minutos)
print(segundos)