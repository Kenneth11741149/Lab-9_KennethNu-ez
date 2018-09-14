output: main.o Civilizacion.o Jugador.o Aldeano.o Edificio.o Casa.o Cuartel.o Castillo.o
	g++ main.o Civilizacion.o Jugador.o Aldeano.o Edificio.o Casa.o Cuartel.o Castillo.o -o output
main.o: main.cpp
	g++ -c main.cpp
Civilizacion.o: Civilizacion.h Civilizacion.cpp
	g++ -c Civilizacion.cpp
Jugador.o: Jugador.h Jugador.cpp
	g++ -c Jugador.cpp
Aldeano.o: Aldeano.h Aldeano.cpp
	g++ -c Aldeano.cpp
Edificio.o: Edificio.h Edificio.cpp
	g++ -c Edificio.cpp
Casa.o:	Casa.h Casa.cpp
	g++ -c Casa.cpp
Cuartel.o: Cuartel.h Cuartel.cpp
	g++ -c Cuartel.cpp
Castillo.o: Castillo.h Castillo.cpp
	g++ -c Castillo.cpp