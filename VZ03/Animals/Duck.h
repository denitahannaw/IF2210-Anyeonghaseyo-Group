#ifndef DUCK_H
#define DUCK_H

#include "WaterAnimal.cpp"

class Duck: public WaterAnimal{
public:
	Duck(int,int);
	~Duck();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "duck";
	const char simbol = 'k';
	int bobot;
};
#endif
