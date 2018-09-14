#ifndef CABALLERO_H
#define CABALLERO_H

#include "Tropa.h"

class Caballero:public Tropa{
private:
	//double ataqueneto;
public:
	Caballero();
	Caballero(string,int,int,double,double,double,double,int);

	void setAtaqueneto(double pataqueneto){
		ataqueneto = pataqueneto;
	}

	double getAtaqueneto(){
		return ataqueneto;
	}

	bool Ataque(Tropa* contrincante){
		int virtud = 10;
		int vidaone = this -> getVida() + 10;
		int ataqueone = this -> getAtaque() + this -> getVelocidad()/2;

		int vidatwo = contrincante -> getVida();
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

	string toString();


};
#endif