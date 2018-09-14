#include "Civilizacion.h"
#include "Jugador.h"

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
	 char resp = 's';
	 string input = ""; 
	 string input2 = "";
	 int option = 0;
	 int option2 = 0;
	 int temporal = 0;
	 stringstream stream;
	 int jugadores = 0;
	 int civilizaciones = 0;

	 ///////////
	 Jugador actual;


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



	 				char resp2 = 'S';
	 				while(resp2 == 'S' || resp2 == 's'){
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
	 							{
	 								Civilizacion temporal = actual.getCivilizacion();	 		
	 								if(temporal.){
	 								{

	 							} // Fin del scope case 1

	 							break;
	 						case 2:
	 							{

	 							}

	 							break;
	 						case 3:
	 							{

	 							}
	 								
	 							break;
	 						case 4:
	 							{

	 							}

	 							break;
	 						case 5:
	 							{

	 							}

	 							break;
	 						case 6:	
	 							{

	 							}

	 							break;
	 						case 7:
	 							{

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