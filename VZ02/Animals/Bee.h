#ifndef BEE_H
#define BEE_H

#include <string>
using namespace std;

class Bee{
public:
	Bee();
	~Bee();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "flying";
};
#endif
