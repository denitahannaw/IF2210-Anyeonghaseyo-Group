#ifndef GOAT_H
#define GOAT_H

#include <string>
using namespace std;

class Goat{
public:
	Goat();
	~Goat();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "land";
};
#endif
