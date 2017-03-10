#ifndef BUTTERFLY_H
#define BUTTERFLY_H

#include <string>
using namespace std;

class Butterfly{
public:
	Butterfly();
	~Butterfly();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "flying";
};
#endif
