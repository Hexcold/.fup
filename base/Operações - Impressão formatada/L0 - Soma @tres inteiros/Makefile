### ATENÇÂO: PODE DAR ERRO EM C/C++ (AINDA VOU RESOLVER ELES)

#O Makefile tem o objetivo de facilitar a compilação e execução dos códigos, em Python ele não é muito necessário. Entretanto estará em todas as pastas. 

#Para todos os casos ele poderá ser utilizado para realizar os teste do TKO

###

#Comando para executar: make
all:

c comp: #Comando para executar: make c comp
	 gcc C/Solver.c -o Solver

#utiizado para compilar o Solver.c

c exer: #Comando para executar: make c exer
	./Solver
#utilizado para executa o Solver.c

c++ comp: #Comando para executar: make c++ comp
	 g++ C++/Solver.cpp -o Solver

#utiizado para compilar o Solver.c

c++ exer: #Comando para executar: make c++ exer
	./Solver
#utilizado para executa o Solver.c

py: #Comando para executar: make exerc
	python Python/Solver.py 
#utiizado para executa o Solver.py

###

#Pode ser utilizado para realizar os testes unitários na própria máquina (são os mesmos do moodle). Só funcionará para quem estiver com o TKO instalado na máquina e tiver baixado os casos de teste da atividade atual. Qualquer dúvida só pedir ajuda a algum monitor 

tko py: #Comando para executar: make tko py
	tko run Python/Solver.py cases.tio

tko c: #Comando para executar: make tko c
	tko run C/Solver.py cases.tio

tko c++: #Comando para executar: make tko c
	tko run C++/Solver.cpp cases.tio
