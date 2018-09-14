#include "Civilizacion.h"

Civilizacion::Civilizacion(string pnombre){
	nombre = pnombre;
	oro = 0;
	madera = 0;
	piedra = 0;
	alimento = 100;
	poblacionmaxima = 1000; // Poblacion maxima.
	poblacionactual = 0; // Poblacion actual
	capacidadpoblacion = 700; // Capacidad de poblacion que aumenta con casas.
}

string Civilizacion::toString(){
	return nombre;
}

Civilizacion::~Civilizacion(){

}