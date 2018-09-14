#ifndef CABALLERO_H
#define CABALLERO_H

#include "Tropa.h"

class Caballero:public Tropa{
private:
	double ataqueneto;
public:
	Caballero();
	Caballero(string,int,int,double,double,double,double,int);

	void setAtaqueneto(double pataqueneto){
		ataqueneto = pataqueneto;
	}

	double getAtaqueneto(){
		return ataqueneto;
	}

	void Ataque();

	string toString();


};
#endif