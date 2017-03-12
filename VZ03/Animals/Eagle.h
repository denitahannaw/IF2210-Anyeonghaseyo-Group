#ifndef EAGLE_H
#define EAGLE_H

#include "FlyingAnimal.cpp"

class Eagle: public FlyingAnimal{
public:
	Eagle(int,int);
	~Eagle();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "eagle";
	const char simbol = 'a';
	int bobot;
};
#endif
