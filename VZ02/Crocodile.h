#ifndef CROCODILE_H
#define CROCODILE_H

#include <string>
using namespace std;

class Crocodile{
public:
	Crocodile();
	~Crocodile();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "water";
};
#endif
