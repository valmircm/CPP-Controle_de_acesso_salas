controle: main.o interfacePorta.o controladorAcesso.o listaSalas.o sala.o listaUsuarios.o usuario.o porta.o salaUsuarios.o
	g++ interfacePorta.o controladorAcesso.o listaSalas.o sala.o listaUsuarios.o usuario.o porta.o salaUsuarios.o main.o -o controle

interfacePorta.o: interfacePorta.h interfacePorta.cc
		g++ -c interfacePorta.cc

controladorAcesso.o: controladorAcesso.h controladorAcesso.cc
		g++ -c controladorAcesso.cc

listaSalas.o: listaSalas.h listaSalas.cc
		g++ -c listaSalas.cc

sala.o: sala.h sala.cc
		g++ -c sala.cc

listaUsuarios.o: listaUsuarios.h listaUsuarios.cc
		g++ -c listaUsuarios.cc

usuario.o: usuario.h usuario.cc
		g++ -c usuario.cc

porta.o: porta.h porta.cc
		g++ -c porta.cc

salaUsuarios.o: salaUsuarios.h salaUsuarios.cc
		g++ -c salaUsuarios.cc

main.o: main.cc
		g++ -c main.cc