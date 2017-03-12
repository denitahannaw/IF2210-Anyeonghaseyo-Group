#ifndef BEE_H
#define BEE_H

#include "FlyingAnimal.h"
#include "Herbivora.h"

class Bee: public FlyingAnimal, public Herbivora{
public:
	Bee(int,int);
	~Bee();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "bee";
	const char simbol = 'z';
	int bobot;
	string* musuh;
};
#endif
