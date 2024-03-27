# autor: Henique L. Pires (instagram: @henrq.p | github: Hexcold)

# Repositório online: https://github.com/Hexcold
# Repositório original das questões: https://github.com/qxcodefup/arcade/blob/master/base/resto/Readme.md


dia = int(input())
hora = int(input())
minuto = int(input())

if 2 <= dia <= 6: 
    if (hora == 8 and minuto >= 0) or (8 < hora < 12) or (14 <= hora < 18):  # 
        print("SIM")
    else:
        print("NAO")
elif dia == 7: 
    if hora == 8 and minuto >= 0: 
        print("SIM")
    else:
        print("NAO")
else:
    print("NAO") 


# essa questão tem problema, pois n precisa dos minutos

#if (dia == 1) or (dia == 7 and (hora < 8 or hora >= 12)) or (dia > 1 and dia < 7 #and ((hora >= 12 and hora <= 13) or hora < 8 or hora >= 18)):
#    print("NAO")
#else:
#    print("SIM")
#    