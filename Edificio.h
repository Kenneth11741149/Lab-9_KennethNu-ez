#ifndef EDIFICIO_H
#define EDIFICIO_H

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

class Edificio{
private:
	int costooro;
	int costopiedra;
	int costomadera;
public:
	Edificio();
	Edificio(int,int,int);

	void setCostooro(int pcostooro){
		costooro = pcostooro;
	}

	void setCostopiedra(int pcostopiedra){
		costopiedra = pcostopiedra;
	}

	void setCostomadera(int pcostomadera){
		costomadera = pcostomadera;
	}

	int getCostooro(){
		return costooro;
	}

	int getCostopiedra(){
		return costopiedra;
	}

	int getCostomadera(){
		return costomadera;
	}

	virtual string toString(){
		return "Edificio";
	}

	~Edificio(){

	}
};
#endif