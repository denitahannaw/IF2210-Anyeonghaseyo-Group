#include "Animal.h"

// ctor dengan parameter
Animal::Animal(int _x, int _y){
	x = _x;
	y = _y;
}

// cctor animal
Animal::Animal(const Animal& anim){
	x = anim.x;
	y = anim.y;
}

// dtor animal
Animal::~Animal(){
	
}
	
// set posisi X dari animal
void Animal::setX(int _x){
	x = _x;
}

// set posisi Y dari animal
void Animal::setY(int _y){
	y = _y;
}

// get posisi X
int Animal::getX(){
	return x;
}

// get posisi Y
int Animal::getY(){
	return y;
}
