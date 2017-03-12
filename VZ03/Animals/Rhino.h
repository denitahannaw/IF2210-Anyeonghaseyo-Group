#ifndef RHINO_H
#define RHINO_H

#include "LandAnimal.cpp"

class Rhino: public LandAnimal{
public:
	Rhino(int,int);
	~Rhino();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "rhino";
	const char simbol = 'r';
	int bobot;
};
#endif
