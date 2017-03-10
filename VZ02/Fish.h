#ifndef FISH_H
#define FISH_H

#include <string>
using namespace std;

class Fish{
public:
	Fish();
	~Fish();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "water";
};
#endif
