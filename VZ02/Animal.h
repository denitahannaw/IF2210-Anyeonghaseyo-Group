#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal{
public:
	Animal(int,int,string);
	Animal(const Animal&);
	virtual ~Animal();
	
	void setX(int);
	void setY(int);
	int getX();
	int getY();
	string getTipeHabitat(int);
	string getTipeAnimal();
	char getSimbol();
		
	string interact();
private:
	int x;
	int y;
	char simbol;
	string *tipeHabitat;
	const string tipeAnimal;
	int nHabitat;
};
#endif
