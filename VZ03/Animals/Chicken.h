#ifndef CHICKEN_H
#define CHICKEN_H

#include "LandAnimal.cpp"

class Chicken: public LandAnimal{
public:
	Chicken(int,int);
	~Chicken();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "chicken";
	const char simbol = 'n';
	int bobot;
};
#endif
