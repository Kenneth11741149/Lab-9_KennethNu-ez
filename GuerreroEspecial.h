#ifndef GUERREROESPECIAL_H
#define GUERREROESPECIAL_H

#include "Tropa.h"

class GuerreroEspecial:public Tropa{
private:
	double ataqueneto = 0;
public:
	GuerreroEspecial();
	GuerreroEspecial(string,int,int,double,double,double,double,int);

	void setAtaqueneto(double pvidaoponente){
		ataqueneto = this -> getAtaque() * (1+this->getVelocidad()/5) + pvidaoponente*0.15;
	}

	double getAtaqueneto(){
		return ataqueneto;
	}

	bool Ataque(Tropa* contrincante){
		int vidaone = this -> getVida();
		int ataqueone = this -> getAtaque() * (1 + this->getVelocidad()/2) + (contrincante -> getVida() * 0.15);

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

	void virtud(){
		int tempoataque = this -> getAtaque();
		int  tempodefensa = this -> getDefensa();

		this -> setAtaque(tempoataque + 10);
		this -> setDefensa(tempodefensa + 10);
	}

	string toString(){
		return "GuerreroEspecial";
	}

	~GuerreroEspecial(){

	}
};
#endif