#ifndef GOAT_H
#define GOAT_H

#include "LandAnimal.h"
#include "Herbivora.h"

class Goat: public LandAnimal, public Herbivora{
public:
	Goat(int,int);
	~Goat();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "goat";
	const char simbol = 'g';
	int bobot;
	string* musuh;
};
#endif
