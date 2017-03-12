#ifndef GOAT_H
#define GOAT_H

#include "LandAnimal.cpp"

class Goat: public LandAnimal{
public:
	Goat(int,int);
	~Goat();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "goat";
	const char simbol = 'g';
	int bobot;
};
#endif
