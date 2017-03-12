#ifndef HEDGEHOG_H
#define HEDGEHOG_H

#include "LandAnimal.cpp"

class Hedgehog: public LandAnimal{
public:
	Hedgehog(int,int);
	~Hedgehog();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "hedgehog";
	const char simbol = 'h';
	int bobot;
};
#endif
