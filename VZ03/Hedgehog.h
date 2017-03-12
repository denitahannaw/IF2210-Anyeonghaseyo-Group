#ifndef HEDGEHOG_H
#define HEDGEHOG_H

#include "LandAnimal.h"
#include "Herbivora.h"

class Hedgehog: public LandAnimal, public Herbivora{
public:
	Hedgehog(int,int);
	~Hedgehog();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "hedgehog";
	const char simbol = 'h';
	int bobot;
	string* musuh;
};
#endif
