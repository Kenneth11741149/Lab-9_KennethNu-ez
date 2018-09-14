#include "Caballero.h"

Caballero::Caballero():Tropa("Hombre",110,25,35,40,150,30,2){
	ataqueneto = 35 + (40/2);
}

Caballero::Caballero(string psexo,int pcostoalimentacion, int pcostooro, double pataque, double pdefensa, double pvida, double pvelocidad, int pturnosentrenamiento):
Tropa(psexo,pcostoalimentacion,pcostooro,pataque,pdefensa,pvida,pvelocidad,pturnosentrenamiento){
	ataqueneto = pataque;
}

void Caballero::Ataque(){

}

string Caballero::toString(){
	return "Caballero";
}