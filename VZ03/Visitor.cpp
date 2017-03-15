#include "Visitor.h"

// Visitor::Visitor() {
// 	position = new Cell;
// 	position.SIMBOL = 'X';
// 	position.x = 50; // harusnya di gate
// 	position.y = 50;
// }

Visitor::Visitor(int x, int y){
	
	this->x = x;
	this->y = y;
}

Visitor::~Visitor() {
	// delete position;
}

void Visitor::setPosition(int _x, int _y) {
	this->x = _x;
	this->y = _y;
}

int Visitor::getX() {
	return x;
}

int Visitor::getY() {
	return y;
}

char Visitor::getSimbol() {
	return simbol;
}
// Cell Visitor::getPosition() { return position;}