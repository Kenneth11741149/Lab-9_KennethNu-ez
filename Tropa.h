#ifndef TROPA_H
#define TROPA_H

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

class Tropa{
private:
	string sexo;
	int costoalimentacion;
	int costooro;
	double attack;
	double defensa;
	double vida;
	double velocidad;
	int turnosentrenamiento;
protected:
	double ataqueneto;
public:
	Tropa();

	double getAtaqueneto(){
		return ataqueneto;
	}

	Tropa(string,int,int,double,double,double,double,int);

	void setSexo(string psexo){
		sexo = psexo;
	}

	void setCostoalimentacion(int pcostoalimentacion){
		costoalimentacion = pcostoalimentacion;
	}

	void setCostooro(int pcostooro){
		costooro = pcostooro;
	}

	void setAtaque(double pataque){
		attack = pataque;
	}

	void setDefensa(double pdefensa){
		defensa = pdefensa;
	}

	void setVida(double pvida){
		vida = pvida;
	}

	void setVelocidad(double pvelocidad){
		velocidad = pvelocidad;
	}

	void setTurnosentrenamiento(double pturnosentrenamiento){
		turnosentrenamiento = pturnosentrenamiento;
	}

	string getSexo(){
		return sexo;
	}

	int getCostoalimentacion(){
		return costoalimentacion;
	}

	int getCostooro(){
		return costooro;
	}

	double getAtaque(){
		return attack;
	}

	double getDefensa(){
		return defensa;
	}

	double getVida(){
		return vida;
	}

	double getVelocidad(){
		return velocidad;
	}

	int getTurnosentrenamiento(){
		return turnosentrenamiento;
	}

	virtual string toString();
	
	virtual bool Ataque(Tropa* contrincante){
		cout << "Tropa simple no lista para combate. " << endl;
		return true;
	}

	~Tropa(){

	}


};

#endif