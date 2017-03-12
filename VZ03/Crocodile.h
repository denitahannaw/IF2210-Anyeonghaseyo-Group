#ifndef CROCODILE_H
#define CROCODILE_H

#include "WaterAnimal.h"
#include "Karnivora.h"

class Crocodile: public WaterAnimal, public Karnivora{
public:
	Crocodile(int,int);
	~Crocodile();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "crocodile";
	const char simbol = 'j';
	int bobot;
	string* musuh;
};
#endif
