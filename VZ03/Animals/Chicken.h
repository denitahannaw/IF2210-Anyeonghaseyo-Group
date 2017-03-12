#ifndef CHICKEN_H
#define CHICKEN_H

#include "LandAnimal.h"
#include "Omnivora.h"

class Chicken: public LandAnimal, public Omnivora{
public:
	Chicken(int,int);
	~Chicken();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "chicken";
	const char simbol = 'n';
	int bobot;
	string* musuh;
};
#endif
