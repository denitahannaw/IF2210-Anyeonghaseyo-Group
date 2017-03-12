#ifndef ELEPHANT_H
#define ELEPHANT_H

#include "LandAnimal.cpp"

class Elephant: public LandAnimal{
public:
	Elephant(int,int);
	~Elephant();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "elephant";
	const char simbol = 'e';
	int bobot;
};
#endif
