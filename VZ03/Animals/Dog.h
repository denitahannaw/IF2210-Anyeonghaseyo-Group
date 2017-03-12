#ifndef DOG_H
#define DOG_H

#include "LandAnimal.cpp"

class Dog: public LandAnimal{
public:
	Dog(int,int);
	~Dog();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "dog";
	const char simbol = 'd';
	int bobot;
};
#endif
