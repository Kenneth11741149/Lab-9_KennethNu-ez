#include "GuerreroEspecial.h"

GuerreroEspecial::GuerreroEspecial():Tropa("Hombre",150,90,50,50,200,20,3){

}

GuerreroEspecial::GuerreroEspecial(string psexo,int pcostoalimentacion, int pcostooro, double pataque, double pdefensa, double pvida, double pvelocidad, int pturnosentrenamiento):
Tropa(psexo,pcostoalimentacion,pcostooro,pataque,pdefensa,pvida,pvelocidad,pturnosentrenamiento){
	
}