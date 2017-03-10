#ifndef HEDGEHOG_H
#define HEDGEHOG_H

#include <string>
using namespace std;

class Hedgehog{
public:
	Hedgehog();
	~Hedgehog();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "land";
};
#endif
