### ATENÇÂO: PODE DAR ERRO EM C/C++ (AINDA VOU RESOLVER ELES)

#O Makefile tem o objetivo de facilitar a compilação e execução dos códigos, em Python ele não é muito necessário. Entretanto estará em todas as pastas. 

#Para todos os casos ele poderá ser utilizado para realizar os teste do TKO

###

#Comando para executar: make all
all:

c_comp: #Comando para executar: make c_comp
	 gcc C/Solver.c -o Solver

#utiizado para compilar o Solver.c

c_exer: #Comando para executar: make c_exer
	./Solver
#utilizado para executa o Solver.c

c++_comp: #Comando para executar: make c++_comp
	 g++ C++/Solver.cpp -o Solver

#utiizado para compilar o Solver.cpp

c++_exer: #Comando para executar: make c++_exer
	./Solver
#utilizado para executa o Solver.cpp

java_comp: #Comando para executar: make_comp
	java Java/*.java 
#utiizado para compilar o Solver.java

java_exer: #Comando para executar: make_exer
	java -cp . Solver
#utiizado para executa o Solver.java

py: #Comando para executar: make py
	python Python/Solver.py 
#utiizado para executa o Solver.py

js: #Comando para executar: make exerc
	node JavaScript/Solver.js
#utiizado para executa o Solver.js

ts: #Comando para executar: make exerc
	ts-node TypeScript/Solver.ts
#utiizado para executa o Solver.ts

###

#Pode ser utilizado para realizar os testes unitários na própria máquina (são os mesmos do moodle). Só funcionará para quem estiver com o TKO instalado na máquina e tiver baixado os casos de teste da atividade atual. Qualquer dúvida só pedir ajuda a algum monitor 

tko_all: #Comando para executar: make tko "todas as liguagens"
	tko run C/Solver.c cases.tio
	tko run C++/Solver.cpp cases.tio
	tko run Java/Solver.java cases.tio
	tko run Python/Solver.py cases.tio
	tko run JavaScript/Solver.js cases.tio
	tko run TypeScript/Solver.ts cases.tio

tko_c_: #Comando para executar: make tko c
	tko run C/Solver.c cases.tio

tko_c++: #Comando para executar: make tko c++
	tko run C++/Solver.cpp cases.tio

tko_py: #Comando para executar: make tko py
	tko run Python/Solver.py cases.tio

tko_java: #Comando para executar: make tko java
	tko run Java/Solver.java cases.tio

tko_js: #Comando para executar: make tko js
	tko run JavaScript/Solver.js cases.tio

tko_ts: #Comando para executar: make tko ts
	tko run TypeScript/Solver.ts cases.tio
