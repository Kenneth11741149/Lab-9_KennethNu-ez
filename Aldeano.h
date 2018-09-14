#ifndef ALDEANO_H
#define ALDEANO_H

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


class Aldeano{
private:
	string sexo;
	int costoalimentacion = 55;
public:
	Aldeano(){

	}


	Aldeano(string);

	void setSexo(string psexo){
		sexo = psexo;
	}

	string getSexo(){
		return sexo;
	}


	string toString(){
		return "Aldeano";
	}

	~Aldeano(){

	}
};

#endif