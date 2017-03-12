#ifndef SNAKE_H
#define SNAKE_H

#include "LandAnimal.cpp"

class Snake: public LandAnimal{
public:
	Snake(int,int);
	~Snake();
	
	void addBobot();
	int getBobot();
	char getSimbol();
	
	string interact();
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "snake";
	const char simbol = 's';
	int bobot;
};
#endif
