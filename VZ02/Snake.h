#ifndef SNAKE_H
#define SNAKE_H

#include <string>
using namespace std;

class Snake{
public:
	Snake();
	~Snake();
	
	string interact();
	string tipeAnimal();
	
private:
	const string tipe = "land";
};
#endif
