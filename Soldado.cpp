#include "Soldado.h"

Soldado::Soldado():Tropa("Hombre",90,25,25,25,100,10,1){
	ataqueneto = 25;
}

Soldado::Soldado(string psexo,int pcostoalimentacion, int pcostooro, double pataque, double pdefensa, double pvida, double pvelocidad, int pturnosentrenamiento):
Tropa(psexo,pcostoalimentacion,pcostooro,pataque,pdefensa,pvida,pvelocidad,pturnosentrenamiento){
	ataqueneto = pataque;
}



string Soldado::toString(){
	return "Soldado";
}