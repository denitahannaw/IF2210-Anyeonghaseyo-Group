#ifndef BEETLE_H
#define BEETLE_H

#include "FlyingAnimal.h"
#include "Herbivora.h"

class Beetle: public FlyingAnimal, public Herbivora{
public:
	Beetle(int,int);
	~Beetle();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "beetle";
	const char simbol = 'q';
	int bobot;
	string* musuh;
};
#endif
