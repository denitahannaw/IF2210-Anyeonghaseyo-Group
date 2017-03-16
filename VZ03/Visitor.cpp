#include "Visitor.h"

// ctor Visitor
// Visitor::Visitor() {
// 	position = new Cell;
// 	position.SIMBOL = 'X';
// 	position.x = 50; // harusnya di gate
// 	position.y = 50;
// }

//  cctor Visitor
Visitor::Visitor(int x, int y){
	
	this->x = x;
	this->y = y;
}

// set posisi visitor di matriks
void Visitor::setPosition(int _x, int _y) {
	this->x = _x;
	this->y = _y;
}

// get posisi X visitor
int Visitor::getX() {
	return x;
}

// get posisi Y visitor
int Visitor::getY() {
	return y;
}

// get simbol representasi visitor
char Visitor::getSimbol() {
	return simbol;
}
// Cell Visitor::getPosition() { return position;}
