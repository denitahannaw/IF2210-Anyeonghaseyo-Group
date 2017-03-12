#ifndef COW_H
#define COW_H

#include "LandAnimal.h"
#include "Herbivora.h"


class Cow: public LandAnimal, public Herbivora{
public:
	Cow(int,int);
	~Cow();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "cow";
	const char simbol = 'w';
	int bobot;
	string* musuh;
};
#endif
