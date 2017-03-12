#ifndef FISH_H
#define FISH_H

#include "WaterAnimal.h"
#include "Omnivora.h"

class Fish: public WaterAnimal, public Omnivora{
public:
	Fish(int,int);
	~Fish();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "fish";
	const char simbol = 'i';
	int bobot;
	string* musuh;
};
#endif
