output: main.o Civilizacion.o Jugador.o Aldeano.o Edificio.o Casa.o Cuartel.o Castillo.o Tropa.o Soldado.o Caballero.o GuerreroEspecial.o
	g++ main.o Civilizacion.o Jugador.o Aldeano.o Edificio.o Casa.o Cuartel.o Castillo.o Tropa.o Soldado.o Caballero.o GuerreroEspecial.o -o output
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
Tropa.o: Tropa.h Tropa.cpp
	g++ -c Tropa.cpp
Soldado.o: Soldado.h Soldado.cpp
	g++ -c Soldado.cpp
Caballero.o: Caballero.h Caballero.cpp
	g++ -c Caballero.cpp
GuerreroEspecial.o: GuerreroEspecial.h GuerreroEspecial.cpp
	g++ -c GuerreroEspecial.cpp