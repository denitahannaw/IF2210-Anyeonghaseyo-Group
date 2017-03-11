#ifndef LION_H
#define LION_H

#include <string>
using namespace std;

class Lion{
public:
	Lion();
	~Lion();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "land";
};
#endif
