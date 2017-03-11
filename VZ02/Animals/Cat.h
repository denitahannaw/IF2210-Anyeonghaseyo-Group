#ifndef CAT_H
#define CAT_H

#include <string>
using namespace std;

class Cat{
public:
	Cat();
	~Cat();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "land";
};
#endif
