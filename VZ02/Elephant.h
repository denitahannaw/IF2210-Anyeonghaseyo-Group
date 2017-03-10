#ifndef ELEPHANT_H
#define ELEPHANT_H

#include <string>
using namespace std;

class Elephant{
public:
	Elephant();
	~Elephant();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "land";
};
#endif
