#ifndef DUCK_H
#define DUCK_H

#include <string>
using namespace std;

class Duck{
public:
	Duck();
	~Duck();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "water";
};
#endif
