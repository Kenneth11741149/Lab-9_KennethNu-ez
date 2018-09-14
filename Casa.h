#ifndef CASA_H
#define CASA_H

#include "Edificio.h"

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

class Casa:public Edificio{
private:
	int populationincrease = 5;
public:
	Casa();
	Casa(int,int,int);

	void setPopulationincrease(int ppopulationincrease){
		populationincrease = ppopulationincrease;
	}

	int getPopulationincrease(){
		return populationincrease;
	}

	string toString(){
		return "Casa";
	}

	~Casa(){

	}
};
#endif