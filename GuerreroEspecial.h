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

	void Ataque(){
		
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