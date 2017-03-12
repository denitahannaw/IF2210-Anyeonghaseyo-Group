#ifndef BUTTERFLY_H
#define BUTTERFLY_H

#include "FlyingAnimal.h"
#include "Herbivora.h"

class Butterfly: public FlyingAnimal, public Herbivora{
public:
	Butterfly(int,int);
	~Butterfly();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "butterfly";
	const char simbol = 't';
	int bobot;
	string* musuh;
};
#endif
