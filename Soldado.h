#ifndef SOLDADO_H
#define SOLDADO_H

#include "Tropa.h"

class Soldado:public Tropa{
private:
	//double ataqueneto;
public:
	Soldado();
	Soldado(string,int,int,double,double,double,double,int);

	bool ataque(Tropa* contrincante){
		int vidaone = this -> getVida();
		int ataqueone = ataqueneto;

		int vidatwo = contrincante ->getVida();
		int ataquetwo = contrincante -> getAtaqueneto();

		while(vidaone > 0 && vidatwo > 0 ){
			vidatwo -= ataqueone;
			if(vidatwo < 0){
				return true;
			}
			vidaone -= ataquetwo;
			if(vidaone < 0){
				return false;
			}
		}
		if(vidaone < vidatwo){
			return false;
		} else {
			return true;
		}	
	}

	void setAtaqueneto(double pneto){
		ataqueneto = pneto;
	}

	double getAtaqueneto(){
		return ataqueneto;
	}

	string toString();
};	
#endif