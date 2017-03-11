#ifndef EAGLE_H
#define EAGLE_H

#include <string>
using namespace std;

class Eagle{
public:
	Eagle();
	~Eagle();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "flying";
};
#endif
