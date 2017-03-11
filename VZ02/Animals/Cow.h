#ifndef COW_H
#define COW_H

#include <string>
using namespace std;

class Cow{
public:
	Cow();
	~Cow();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "land";
};
#endif
