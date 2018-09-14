output: main.o Civilizacion.o Jugador.o Aldeano.o
	g++ main.o Civilizacion.o Jugador.o Aldeano.o -o output
main.o: main.cpp
	g++ -c main.cpp
Civilizacion.o: Civilizacion.h Civilizacion.cpp
	g++ -c Civilizacion.cpp
Jugador.o: Jugador.h Jugador.cpp
	g++ -c Jugador.cpp
Aldeano.o: Aldeano.h Aldeano.cpp
	g++ -c Aldeano.cpp