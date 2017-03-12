#ifndef CROCODILE_H
#define CROCODILE_H

#include "WaterAnimal.cpp"

class Crocodile: public WaterAnimal{
public:
	Crocodile(int,int);
	~Crocodile();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "crocodile";
	const char simbol = 'j';
	int bobot;
};
#endif
