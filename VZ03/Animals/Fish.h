#ifndef FISH_H
#define FISH_H

#include "WaterAnimal.cpp"

class Fish: public WaterAnimal{
public:
	Fish(int,int);
	~Fish();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "fish";
	const char simbol = 'i';
	int bobot;
};
#endif
