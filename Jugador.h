#ifndef JUGADOR_H
#define JUGADOR_H

#include "Civilizacion.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <sstream>
using std::stringstream;

#include <vector>
using std::vector;


class Jugador{
private:
	string nombre;
	Civilizacion civilizacion;
public:
	Jugador(){

	}
	Jugador(string,Civilizacion);

	void setNombre(string pnombre){
		nombre = pnombre;
	}

	void setCivilizacion(Civilizacion pcivilizacion){
		civilizacion = pcivilizacion;
	}

	string getNombre(){
		return nombre;
	}

	Civilizacion getCivilizacion(){
		return civilizacion;
	}

	string toString(){
		string retVal = "";
		retVal += nombre;
		return retVal;
	}

	~Jugador();



};
#endif