#ifndef CUARTEL_H
#define CUARTEL_H

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Edificio.h"

#include <sstream>
using std::stringstream;

#include <vector>
using std::vector;

class Cuartel:public Edificio{
private:
public:
	Cuartel();
	Cuartel(int,int,int);

	string toString(){
		return "Cuartel";
	}

	~Cuartel(){

	}

};
#endif