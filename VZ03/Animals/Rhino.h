#ifndef RHINO_H
#define RHINO_H

#include "LandAnimal.h"
#include "Herbivora.h"

class Rhino: public LandAnimal, public Herbivora{
public:
	Rhino(int,int);
	~Rhino();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "rhino";
	const char simbol = 'r';
	int bobot;
	string* musuh;
};
#endif
