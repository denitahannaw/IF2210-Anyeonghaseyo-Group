#ifndef BEETLE_H
#define BEETLE_H

#include <string>
using namespace std;

class Beetle{
public:
	Beetle();
	~Beetle();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "flying";
};
#endif
