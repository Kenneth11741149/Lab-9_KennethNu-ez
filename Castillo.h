#ifndef CASTILLO_H
#define CASTILLO_H

#include "Edificio.h"

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

class Castillo:public Edificio{
private:
	
public:
	Castillo();
	Castillo(int,int,int);

	string toString(){
		return "Castillo";
	}

	~Castillo(){

	}

};
#endif