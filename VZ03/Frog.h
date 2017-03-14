#ifndef FROG_H
#define FROG_H

#include "LandAnimal.h"
#include "WaterAnimal.h"
#include "Karnivora.h"

class Frog: public LandAnimal, public WaterAnimal, public Karnivora{
public:
	Frog(int,int);
	~Frog();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	int getX();
	int getY();
	void setX(int);
	void setY(int);
	
	string interact();
	string getTipeAnimal();
	string getTipeHabitat();
	
protected:
	const string tipeAnimal = "frog";
	const char simbol = 'f';
	int bobot;
	string* musuh;
};
#endif
