#ifndef DOG_H
#define DOG_H

#include "LandAnimal.h"
#include "Karnivora.h"

class Dog: public LandAnimal, public Karnivora{
public:
	Dog(int,int);
	~Dog();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "dog";
	const char simbol = 'd';
	int bobot;
	string* musuh;
};
#endif
