#ifndef BUTTERFLY_H
#define BUTTERFLY_H

#include "FlyingAnimal.cpp"

class Butterfly: public FlyingAnimal{
public:
	Butterfly(int,int);
	~Butterfly();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "butterfly";
	const char simbol = 't';
	int bobot;
};
#endif
