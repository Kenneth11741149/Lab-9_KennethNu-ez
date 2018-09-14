#ifndef SOLDADO_H
#define SOLDADO_H

#include "Solado.h"

class Soldado:public Tropa{
private:
	double ataqueneto;
public:
	Soldado();
	Soldado(string,int,int,double,double,double,double,int);

	void ataque();

	void setAtaqueneto(double pneto){
		ataqueneto = pneto;
	}

	double getAtaqueneto(){
		return ataqueneto;
	}
	string toString();
};	
#endif