#ifndef DOG_H
#define DOG_H

#include <string>
using namespace std;

class Dog{
public:
	Dog();
	~Dog();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "land";
};
#endif
