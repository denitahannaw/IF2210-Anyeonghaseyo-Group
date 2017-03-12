#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "LandAnimal.h"
#include "Herbivora.h"

class Elephant: public LandAnimal, public Herbivora{
public:
	Elephant(int,int);
	~Elephant();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "elephant";
	const char simbol = 'e';
	int bobot;
	string* musuh;
};
#endif
