#include "Animal.h"

Animal::Animal(int _x, int _y){
	x = _x;
	y = _y;
}

Animal::Animal(const Animal& anim){
	x = anim.x;
	y = anim.y;
}

Animal::~Animal(){
	
}
	
void Animal::setX(int _x){
	x = _x;
}

void Animal::setY(int _y){
	y = _y;
}

int Animal::getX(){
	return x;
}

int Animal::getY(){
	return y;
}
