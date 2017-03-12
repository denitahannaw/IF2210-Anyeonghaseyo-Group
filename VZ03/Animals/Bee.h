#ifndef BEE_H
#define BEE_H

#include "FlyingAnimal.cpp"

class Bee: public FlyingAnimal{
public:
	Bee(int,int);
	~Bee();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "bee";
	const char simbol = 'z';
	int bobot;
};
#endif
