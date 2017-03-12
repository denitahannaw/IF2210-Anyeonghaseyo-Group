#ifndef LION_H
#define LION_H

#include "LandAnimal.h"
#include "Karnivora.h"

class Lion: public LandAnimal, public Karnivora{
public:
	Lion(int,int);
	~Lion();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "lion";
	const char simbol = 'l';
	int bobot;
	string* musuh;
};
#endif
