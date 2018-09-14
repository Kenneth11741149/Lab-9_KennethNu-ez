#ifndef CIVILIZACION_H
#define CIVILIZACION_H

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

class Civilizacion{
private:
	string nombre;
	int oro;
	int madera;
	int piedra;
	int alimento;
	int poblacionmaxima; // Poblacion maxima.
	int poblacionactual; // Poblacion actual
	int capacidadpoblacion; // Capacidad de poblacion que aumenta con casas.
	//Falta el guerrero especial
public:
	Civilizacion(){
		
	}
	Civilizacion(string);
	//Civilizacion(string,int,int,int,int,int,int,int);


	void setNombre(string pnombre){
		nombre = pnombre;
	}

	void setOro(int poro){
		oro = poro;
	}

	void setMadera(int pmadera){
		madera = pmadera;
	}

	void setPiedra(int ppiedra){
		piedra = ppiedra;
	}

	void setAlimento(int palimento){
		alimento = palimento;
	}

	void setPoblacionmaxima(int ppoblacionmaxima){
		poblacionmaxima = ppoblacionmaxima;
	}

	void setPoblacionactual(int ppoblacionactual){
		poblacionactual = ppoblacionactual;
	}

	void setCapacidadpoblacion(int pcapacidadpoblacion){
		capacidadpoblacion = pcapacidadpoblacion;
	}

	string getNombre(){
		return nombre;
	}

	int getOro(){
		return oro;
	}

	int getMadera(){
		return madera;
	}

	int getPiedra(){
		return piedra;
	}

	int getAlimento(){
		return alimento;
	}

	int getPoblacionmaxima(){
		return poblacionmaxima;
	}

	int getPoblacionactual(){
		return poblacionactual;
	}

	int getCapacidadpoblacion(){
		return capacidadpoblacion;
	}


	string toString();
	~Civilizacion();



};
#endif