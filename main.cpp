#include "Civilizacion.h"
#include "Jugador.h"
#include "Aldeano.h"
#include "Casa.h"
#include "Cuartel.h"
#include "Castillo.h"
#include "Soldado.h"
#include "Caballero.h"
#include "typeinfo"


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



int main(){
	 cout << "Bienvenido al Laboratorio #9 de Kenneth" << endl;


	 //Declaracion de variables reutilizables.
	 //Declaracion de variables sin apuntadores me ahorra el paso de borrar manualmente las variables.
	 vector<Civilizacion> civs;
	 vector<Jugador> players;
	 char resp = 's';
	 char resp2 = 'S';

	 //Special frequent variables
	 string input = ""; 
	 string input2 = "";
	 stringstream stream;
	 //Switch case variables
	 int option = 0;
	 int option2 = 0;
	 //If decision variables
	 int option3 = 0;
	 //Special function variables
	 int temporal = 0;
	 int gendermaker = 0;

	 //Random shit
	 int jugadores = 0;
	 int civilizaciones = 0;
	 int case4validator = 0;

	 /////////// Even more random shit
	 Jugador vacio;
	 Jugador& actual = vacio;

	 Civilizacion otratemp;

	 /////	Special user values.
	 int oro;
	 int madera; 
	 int piedra;
	 int alimento; 
	 int poblacionmaxima; 
	 int poblacionactual; 
	 int capacidadpoblacion; 
	 int numaldeanos;
	 int numsoldados;

	


	 while(resp == 'S' || resp == 's'){ // Inicio del while de respuesta de usuario.
	 	cout << endl;
	 	cout << "1. Crear Civilizacion." << endl;
	 	cout << "2. Crear Jugador." << endl;
	 	cout << "3. Guardar Informacion." << endl;
	 	cout << "4. Ingresar." << endl;
	 	option = 0;
	 	cin >> input;
	 	stringstream().swap(stream);
	 	stream << input;
	 	stream >> option;
	 	switch(option){ // Inicio del switch (option)
	 		case 1: //Crear una Civilizacion
	 			{ // Inicio del scope case 1

	 				cout << "Ingresa el nombre de tu Civilizacion" << endl;
	 				input = "";
	 				getline(cin,input);
	 				getline(cin,input);
	 				Civilizacion nueva = Civilizacion(input);
	 				civs.push_back(nueva);
	 				cout << civs[0].toString() <<" Se ha creado exitosamente."<< endl;
	 				civilizaciones++;

	 			} // Fin del scope case 1

	 			break;
	 		case 2:
	 			{ // Inicio del scope chase 2


	 				if(civilizaciones > 0){
	 					cout << "Jugador Ingresa tu nombre. " << endl;
	 					input = "";
	 					getline(cin,input);
	 					getline(cin,input);
	 					for(int i = 0; i < civs.size();i++){
	 						cout << i << ". " << civs[i].toString() << endl;
	 					}
	 					cout << "Escoge tu civilizacion" << endl;
						temporal = 0;
	 					cin >> input2;
	 					stringstream().swap(stream);
	 					stream << input2;
	 					stream >> temporal;
	 					if( temporal >= 0 && temporal <= civs.size()-1){
	 						Jugador nuevo = Jugador(input,civs[temporal]);
	 						players.push_back(nuevo);
	 						cout << "Player: " << input << " You have chosen the civilization. " << civs[temporal].toString() << endl;
	 					} else {
	 						cout << "Invalid Entry" << endl;
	 					}
	 				} else {
	 					cout << "Tienen que haber almenos una Civilizacion para utilizar en juego." << endl;

	 				}// Fin del if que valida que hayan almenos dos jugadores.


	 			}	//FIn del scope case 2

	 			break;
	 		case 3:
	 			{	//Inicio del scope case 3
	 				cout << "Option totally under development." << endl;
	 			}	//Fin del scope case 3

	 			break;
	 		case 4:
	 			{	//Inicio del scope case 4
	 				cout << "Con que jugador va a ingresar? " << endl;
	 				for(int i = 0; i < players.size(); i++){
	 					cout << i <<". "<< players[i].toString() << endl;
	 				}
	 				input = "";
	 				temporal = 0;
	 				cin >> input;
	 				stringstream().swap(stream);
	 				stream << input;
	 				stream >> temporal;
	 				if( temporal >= 0 && temporal <= players.size()-1 && players.size() > 0){
	 						cout << "Player: " << players[temporal].toString() << " Its your turn. " << endl;
	 						actual = players[temporal];
	 						case4validator++;
	 						oro = players[temporal].getCivilizacion().getOro();
							madera = players[temporal].getCivilizacion().getMadera();
							piedra = players[temporal].getCivilizacion().getPiedra();
							alimento = players[temporal].getCivilizacion().getAlimento();
							poblacionmaxima = players[temporal].getCivilizacion().getPoblacionmaxima();
							poblacionactual = players[temporal].getCivilizacion().getPoblacionactual();
							capacidadpoblacion = players[temporal].getCivilizacion().getCapacidadpoblacion();
							numaldeanos = players[temporal].getCivilizacion().getAldeanos().size();
							numsoldados = players[temporal].getCivilizacion().getTroops().size();

							cout << "Oro:       " << oro <<endl;
							cout << "Madera:    " << madera << endl;
							cout << "Piedra: 	" << piedra << endl;
							cout << "Alimento:  " << alimento << endl;
							cout << "Poblacion Maxima: " << poblacionmaxima << endl;
							cout << "Poblacion Actual: " << poblacionactual << endl;
							cout << "Capacidad de Poblacion: " << capacidadpoblacion << endl; 
							cout << "Numero de aldeanos: " << numaldeanos << endl;
							cout << "Numero de soldados: " << numsoldados << endl;
							otratemp = players[temporal].getCivilizacion();
							for(int i = 0; i < otratemp.getTraining().size();i++){
								if(     ((Tropa)otratemp.getTraining()[i]).getTurnosentrenamiento() > 0){
									int yanotengovariables = ((Tropa)otratemp.getTraining()[i]).getTurnosentrenamiento();
									if(yanotengovariables == 1){
										cout << otratemp.getTraining()[i].toString() << "Ha terminado su entrenamiento" <<endl;
										otratemp.addTropa(otratemp.getTraining()[i]);
										vector<Tropa> lmfao = otratemp.getTraining();
										lmfao.erase(lmfao.begin() + i);
										cout << "" << endl;
									}
									yanotengovariables--;
									((Tropa)otratemp.getTroops()[i]).setTurnosentrenamiento(yanotengovariables);

								}
							}

	 				} else {
	 						cout << "Invalid Entry. " << endl;
	 				}
	 				
	 				if(case4validator == 0){
	 					resp2 = 'N';
	 				} else {
	 					resp2 = 'S';
	 				}
	 				while(resp2 == 'S' || resp2 == 's'){
	 					otratemp =  players[temporal].getCivilizacion();
	 					actual = players[temporal];
		 				cout << endl;
		 				cout << "1. Nuevo aldeano." << endl;
		 				cout << "2. Buscar recursos." << endl;
		 				cout << "3. Nuevo Edificio." << endl;
		 				cout << "4. Nueva Tropa." << endl;
		 				cout << "5. Desterrar poblacion." << endl;
		 				cout << "6. Batalla." << endl;
		 				cout << "7. Finalizar Turno." << endl;
		 				cout << "8. Volver al menu principal." << endl;
		 				input = "";
		 				option2 = 0;
		 				stringstream().swap(stream);
		 				cin >> input;
		 				stream << input;
		 				stream >> option2;
	 					switch(option2){
	 						case 1:
	 							{ // Inicio del scope del Case 1 option 2.

	 								Civilizacion temporales = actual.getCivilizacion();	 
	 								if(temporales.getAlimento() < 55){
	 									cout << "No tienes suficientes recursos." << endl;
	 								} else if(temporales.getPoblacionactual()+1 > temporales.getCapacidadpoblacion()){
	 									cout << "Has exedido el limite de tu poblacion." << endl;
	 								} else {
	 									int contador = temporales.getAlimento();
	 									contador -= 55;
	 									temporales.setAlimento(contador);
	 									numaldeanos++;
	 									if(gendermaker % 2 == 0){
	 										Aldeano hombre = Aldeano("Hombre");
	 										temporales.addAldeano(hombre);
	 										
	 										cout << "Se ha creado un aldeano Hombre. " << endl;
	 									} else {
	 										Aldeano mujer = Aldeano("Mujer");
	 										temporales.addAldeano(mujer);
	 										
	 										cout << "Se ha creado un aldeano Mujer. " << endl; 
	 									}
	 									players[temporal].setCivilizacion(temporales);
	 									actual = players[temporal];
	 									gendermaker++;
	 								}
	 								

	 							} // Fin del scope case 1 option 2 switch

	 							break;
	 						case 2:
	 							{	//beginning of scope case 2
	 								for(int i = 0; i < numaldeanos; i++){
	 									alimento+=50;
	 									madera+=40;
	 									oro+=30;
	 									piedra+=20;	
	 								} //end for
	 								cout << "Colecta exitosa" << endl;
	 								otratemp = players[temporal].getCivilizacion();
	 								otratemp.setAlimento(alimento);
	 								otratemp.setMadera(madera);
	 								otratemp.setOro(oro);
	 								otratemp.setPiedra(piedra);
	 								players[temporal].setCivilizacion(otratemp);
	 								actual = players[temporal];

	 								

	 							} // end of scope case 2

	 							break;
	 						case 3:
	 							{	//Inicio del scope case 3 subswitchcase option2

	 								cout << "1. Casa. (50 de madera)" << endl;
	 								cout << "2. Cuartel. (120 de madera y 80 de piedra)" << endl;
	 								cout << "3. Castillo. (275 de madera y 200 de piedra)" << endl;
	 								cout << "Que deseas construir? " << endl;
	 								input = "";
	 								option3 = 0;
	 								stringstream().swap(stream);
	 								cin >> input;
	 								stream << input;
	 								stream >> option3;
	 								otratemp = players[temporal].getCivilizacion();
	 								if(option3 == 1){
	 									if(otratemp.getCapacidadpoblacion() + 5 == otratemp.getPoblacionmaxima()){
	 										cout << "Has alcanzado tu limite de poblacion." << endl;
	 									} else if(otratemp.getMadera() >= 50 ){
	 										madera -= 50;
	 										otratemp.setMadera(madera);
	 										Casa newhouse = Casa();
	 										otratemp.addHouse(newhouse); //Automaticamente incrementa la capacidad a nivel de Objeto.
	 										capacidadpoblacion += 5;
	 										cout << "Casa exitosa" << endl;
	 										players[temporal].setCivilizacion(otratemp);
	 										actual = players[temporal];
	 									} else {
	 										cout << "No tienes suficiente madera para construirte un casa." << endl;
	 									}

	 								} else if(option3 == 2){
	 									otratemp = players[temporal].getCivilizacion();
	 									if(otratemp.getMadera() >= 120 && otratemp.getPiedra() >= 80){
	 										madera -= 120;
	 										piedra -= 80;
	 										otratemp.setMadera(madera);
	 										otratemp.setPiedra(piedra);
	 										Cuartel newcuartel = Cuartel();
	 										otratemp.addBuilding(newcuartel);
	 										cout << "Cuartel exitoso" << endl;
	 										otratemp.addCuarteles();
	 										players[temporal].setCivilizacion(otratemp);
	 										actual = players[temporal];
	 									} else {
	 										cout << "No tienes suficiente madera o piedra para construirte un cartel. " << endl;
	 									}


	 								} else if(option3 == 3){
	 									otratemp = players[temporal].getCivilizacion();
	 									if(otratemp.getMadera() >= 275  && otratemp.getPiedra() >= 200){
	 										Castillo newcastillo = Castillo();
	 										madera-=275;
	 										piedra-=200;
	 										otratemp.setMadera(madera);
	 										otratemp.setPiedra(piedra);
	 										otratemp.addBuilding(newcastillo);
	 										otratemp.addCastillos();
	 										players[temporal].setCivilizacion(otratemp);
	 										cout << "Castillo exitoso." << endl;
	 									} else {
	 										cout << "No tienes suficiente madera o piedra para construirte un Castillo. " << endl;
	 									}
	 								} else {
	 									cout << "Invalid Entry" << endl;
	 								} // end if of building decision.



	 							}	//Inicio del scope case 3 switch case option2
	 								
	 							break;
	 						case 4:
	 							{	//Inicio del scope case 4 switch case option2

	 								cout << "1. Soldado (1 turno)" << endl;
	 								cout << "2. Caballeria (2 turnos)" << endl;
	 								cout << "3. Guerrero Especial (3 turnos)" << endl;
	 								cout << "Que deseas crear?" << endl;
	 								input = "";
	 								option3 = 0;
	 								cin >> input;
	 								stringstream().swap(stream);
	 								stream << input;
	 								stream >> option3;

	 								otratemp = players[temporal].getCivilizacion();
	 								bool soldat = false;
	 								bool caballerie = false;
	 								bool guerr = false;
	 								if(otratemp.getCuarteles() > 0){
	 									soldat = true;
	 									caballerie = true;

	 								} else if(otratemp.getCastillos() > 0) {
	 									guerr = true;

	 								}


	 								if(option3 == 1){
	 									if(soldat && otratemp.getPoblacionactual() + 1 <= otratemp.getPoblacionmaxima()){
	 										if(otratemp.getAlimento() >= 90 && otratemp.getOro() >= 25){
	 											Soldado newsoldier = Soldado();
	 											otratemp.addTraining(newsoldier);
	 											poblacionactual++;
	 											players[temporal].setCivilizacion(otratemp);
	 											cout << "Tropa se ha puesto bajo entrenamiento" << endl;
	 										} else {
	 											cout << "No tienes recursos suficiente" << endl;
	 										}
		 										
	 									} else {
	 										cout << "No tienes un cuartel. o te exediste tu limite de poblacion" << endl;
	 									}

	 								} else if(option3 == 2){
	 									if(caballerie && otratemp.getPoblacionactual() + 1 <= otratemp.getPoblacionmaxima()){
	 										if(otratemp.getAlimento() >= 110 && otratemp.getOro() >= 60){
	 											Caballero newCaballero = Caballero();
	 											otratemp.addTraining(newCaballero);
	 											players[temporal].setCivilizacion(otratemp);
	 											poblacionactual++;
	 											cout << "Tropa se ha puesto bajo entrenamiento" << endl;
	 										} else {
	 											cout << "No tienes recursos suficiente" << endl;
	 										}
	 										
	 									} else {
	 										cout << "No tienes un cuartel o te exediste tu limite de poblacion"  << endl;
	 									}
	 								} else if(option3 == 3){
	 									if(guerr && otratemp.getPoblacionactual() + 1 <= otratemp.getPoblacionmaxima()){
	 										if(otratemp.getAlimento() >= 150 && otratemp.getOro() >=90){
	 											GuerreroEspecial newGuerr = GuerreroEspecial();
	 											otratemp.addTraining(newGuerr);
	 											players[temporal].setCivilizacion(otratemp);
	 											poblacionactual++;
	 											cout << "Tropa se ha puesto bajo entrenamiento" << endl;
	 										} else {
	 											cout << "No tienes los recursos suficientes " << endl;
	 										}
	 										
	 									} else {
	 										cout << "No tienes castillos o te exediste de tu limite de poblacion." << endl;
	 									}

	 								} else {
	 									cout << "Invalid Entry" << endl;
	 								}
	 								


	 							}	//Fin del scope case 4 swtich case option 2

	 							break;
	 						case 5: //Desterrar poblacion
	 							{	//End of scope case 5 switch case option 2
	 								otratemp = players[temporal].getCivilizacion();
	 								otratemp.setOro(0);
	 								otratemp.setMadera(0);
	 								otratemp.setPiedra(0);
	 								otratemp.setAlimento(100);

	 								otratemp.setPoblacionactual(0);

	 								GuerreroEspecial null;
	 								otratemp.setTrooper(null);
	 								vector<Aldeano> aldeanosnull = otratemp.getAldeanos();
	 								aldeanosnull.clear();
	 								vector<Tropa>troopsnull = otratemp.getTroops();
	 								troopsnull.clear();

	 								vector<Tropa> trainingnull = otratemp.getTraining();
	 								trainingnull.clear();
	 								otratemp.setTraining(trainingnull);
	 								otratemp.setAldeanos(aldeanosnull);
	 								otratemp.setTroops(troopsnull);
	 								players[temporal].setCivilizacion(otratemp);
	 								cout << "Poblacion desterrada exitosamente " << endl;

	 							}	//End of scope case 5 switch case option 2

	 							break;
	 						case 6:	
	 							{

	 							}

	 							break;
	 						case 7:
	 							{
	 								resp2 = 'N';
	 							}

	 							break;
	 						case 8:
	 							{

	 							}

	 							break;
	 						default:
	 							cout << "Invalid Entry" << endl;
	 							break;
	 					} // Fin de switch(option2)



	 				} // Fin de la respuesta de usuario en el case 4.








	 			}	//Fin del scope case 4

	 			break;
	 		default:
	 			cout << endl;
	 			cout << "Invalid entry returning to homescreen." << endl;
	 			cout << endl;
	 			break;

	 	} // Fin del switch(option)





	 	
	 } // Fin del while de respuesta de usuario.
	return 0;
} // Fin de la funcion main.