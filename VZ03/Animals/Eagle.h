#ifndef EAGLE_H
#define EAGLE_H

#include "FlyingAnimal.h"
#include "Karnivora.h"

class Eagle: public FlyingAnimal, public Karnivora{
public:
	Eagle(int,int);
	~Eagle();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "eagle";
	const char simbol = 'a';
	int bobot;
	string* musuh;
};
#endif
