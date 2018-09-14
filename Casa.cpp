#include "Casa.h"


Casa::Casa():Edificio(0,0,50){
	populationincrease = 5;
} //Por default se le da el precio de 50 de madera

Casa::Casa(int pcostooro, int pcostopiedra, int pcostomadera):Edificio(pcostooro,pcostopiedra,pcostomadera){
	populationincrease = 5;
} //O se ingresan los valores especiales.