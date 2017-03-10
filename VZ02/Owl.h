#ifndef OWL_H
#define OWL_H

#include <string>
using namespace std;

class Owl{
public:
	Owl();
	~Owl();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "flying";
};
#endif
