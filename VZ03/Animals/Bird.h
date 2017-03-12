#ifndef BIRD_H
#define BIRD_H

#include "LandAnimal.h"
#include "FlyingAnimal.h"
#include "Karnivora.h"

class Bird: public LandAnimal, public FlyingAnimal, public Karnivora{
public:
	Bird(int,int);
	~Bird();
	
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
	
protected:
	const string tipeAnimal = "bird";
	const char simbol = 'b';
	int bobot;
	string* musuh;
};
#endif
