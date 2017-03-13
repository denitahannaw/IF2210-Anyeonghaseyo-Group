#include "Visitor.h"

Visitor::Visitor() {
	position = new Cell;
	position.SIMBOL = 'X';
	position.x = 50; // harusnya di gate
	position.y = 50;
}

Visitor::Visitor(int x, int y) {
	position = new Cell;
	position.SIMBOL = 'X';
	position.x = x;
	position.y = y;
}

Visitor::~Visitor() {
	delete position;
}

void Visitor::setPosition(int _x, int _y) {
	x = _x;
	y = _y;
}

int Visitor::getPosX() {
	return x;
}

int Visitor::getPosY() {
	return y;
}

//Cell Visitor::getPosition() { return }