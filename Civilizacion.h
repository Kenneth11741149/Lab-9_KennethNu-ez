#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include "GuerreroEspecial.h"
#include "Aldeano.h"
#include "Tropa.h"


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
	GuerreroEspecial trooper; //El guerrero especial
	vector<Aldeano> aldeanos; //Contador de aldeanos.
	vector<Tropa>	troops; // Contador de tropas 
	vector<Casa> housing; // Contador de facil accesso de casas
	vector<Edificio> buildings; //Contador del resto de edificios.
public:
	Civilizacion(){
		
	}
	Civilizacion(string);
	//Civilizacion(string,int,int,int,int,int,int,int);

	void setBuildings( vector<Edificio> pbuildings){
		buildings = pbuildings;
	}

	void addBuilding(Edificio pbuildings){
		buildings.push_back(pbuildings);
	}

	vector<Edificio> getBuildings(){
		return buildings;
	}


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

	void setTrooper(GuerreroEspecial ptrooper){
		trooper = ptrooper;
	}

	void setAldeanos(vector<Aldeano> paldeanos){
		aldeanos = paldeanos;

	}

	void addAldeano(Aldeano paldeano){
		aldeanos.push_back(paldeano);
		poblacionactual++;
	}

	void setTroops(vector<Tropa> ptroops){
		troops = ptroops;
	}

	void addTropa(Tropa ptroopa){
		troops.push_back(ptroopa);
	}

	void setHousing(vector<Casa> phousing){
		housing = phousing;
	}


	void addHouse(Casa pcasa){
		housing.push_back(pcasa);
		capacidadpoblacion+=5;
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

	GuerreroEspecial getTrooper(){
		return trooper;	
	}

	vector<Aldeano> getAldeanos(){
		return aldeanos;
	}

	vector<Tropa> getTroops(){
		return troops;
	}


	vector<Casa> getHousing(){
		return housing;
	}


	string toString();
	~Civilizacion();



};
#endif