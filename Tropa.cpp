#include "Tropa.h"

Tropa::Tropa(){

}

Tropa::Tropa(string psexo,int pcostoalimentacion, int pcostooro, double pataque, double pdefensa, double pvida, double pvelocidad, int pturnosentrenamiento){
	sexo = psexo;
	costoalimentacion = pcostoalimentacion;
	costooro = pcostooro;
	ataque = pataque;
	defensa = pdefensa;
	vida = pvida;
	velocidad = pvelocidad;
	turnosentrenamiento = pturnosentrenamiento;
}

string Tropa::toString(){
	return "Tropa";
}