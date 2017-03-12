#include "FlyingAnimal.h"

FlyingAnimal::FlyingAnimal(int _x, int _y): Animal(_x, _y){
	
}

FlyingAnimal::FlyingAnimal(const FlyingAnimal& fa): Animal(fa){
	
}

FlyingAnimal::~FlyingAnimal(){
	
}
	
string FlyingAnimal::getTipeHabitat(){
	return tipeHabitat;
}
