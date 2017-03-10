#ifndef CHICKEN_H
#define CHICKEN_H

#include <string>
using namespace std;

class Chicken{
public:
	Chicken();
	~Chicken();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "land";
};
#endif
