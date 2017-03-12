#ifndef SNAKE_H
#define SNAKE_H

#include "LandAnimal.h"
#include "Karnivora.h"

class Snake: public LandAnimal, public Karnivora{
public:
	Snake(int,int);
	~Snake();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	string getMusuh(int);
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "snake";
	const char simbol = 's';
	int bobot;
	string* musuh;
};
#endif
