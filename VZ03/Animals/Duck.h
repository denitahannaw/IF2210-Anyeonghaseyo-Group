#ifndef DUCK_H
#define DUCK_H

#include "WaterAnimal.h"
#include "Omnivora.h"

class Duck: public WaterAnimal, public Omnivora{
public:
	Duck(int,int);
	~Duck();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "duck";
	const char simbol = 'k';
	int bobot;
	string* musuh;
};
#endif
