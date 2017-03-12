#ifndef BEETLE_H
#define BEETLE_H

#include "FlyingAnimal.cpp"

class Beetle: public FlyingAnimal{
public:
	Beetle(int,int);
	~Beetle();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "beetle";
	const char simbol = 'q';
	int bobot;
};
#endif
