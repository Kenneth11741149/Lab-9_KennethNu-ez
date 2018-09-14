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
	 char resp = 's';
	 string input = ""; 
	 int option = 0;
	 stringstream stream;
	 while(resp == 'S' || resp == 'S'){ // Inicio del while de respuesta de usuario.

	 	cout << "1. Crear Civilizacion." << endl;
	 	cout << "2. Crear Jugador." << endl;
	 	cout << "3. Guardar Informacion." << endl;
	 	cout << "4. Ingresar." << endl;
	 	option = 0;
	 	cin >> input;
	 	stream << input;
	 	stream >> option;
	 	switch(option){ // Inicio del switch (option)
	 		case 1:
	 			{ // Inicio del scope case 1

	 			} // Fin del scope case 1

	 			break;
	 		case 2:
	 			{ // Inicio del scope case 2

	 			}	//FIn del scope case 2

	 			break;
	 		case 3:
	 			{	//Inicio del scope case 3

	 			}	//Fin del scope case 3

	 			break;
	 		case 4:
	 			{	//Inicio del scope case 4

	 			}	//Fin del scope case 4

	 			break;
	 		default:
	 			cout << "Invalid entry returning to homescreen." << endl;
	 			break;

	 	} // Fin del switch(option)





	 	
	 } // Fin del while de respuesta de usuario.
	return 0;
} // Fin de la funcion main.