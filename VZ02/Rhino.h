#ifndef RHINO_H
#define RHINO_H

#include <string>
using namespace std;

class Rhino{
public:
	Rhino();
	~Rhino();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "land";
};
#endif
