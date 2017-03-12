#ifndef LION_H
#define LION_H

#include "LandAnimal.cpp"

class Lion: public LandAnimal{
public:
	Lion(int,int);
	~Lion();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "lion";
	const char simbol = 'l';
	int bobot;
};
#endif
