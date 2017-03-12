#ifndef FLYINGFISH_H
#define FLYINGFISH_H

#include "FlyingAnimal.h"
#include "WaterAnimal.h"
#include "Karnivora.h"

class Flyingfish: public FlyingAnimal, public WaterAnimal, public Karnivora{
public:
	Flyingfish(int,int);
	~Flyingfish();
	
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
	const string tipeAnimal = "flyingfish";
	const char simbol = 'y';
	int bobot;
	string* musuh;
};
#endif
