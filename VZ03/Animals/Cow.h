#ifndef COW_H
#define COW_H

#include "LandAnimal.cpp"

class Cow: public LandAnimal{
public:
	Cow(int,int);
	~Cow();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "cow";
	const char simbol = 'w';
	int bobot;
};
#endif
