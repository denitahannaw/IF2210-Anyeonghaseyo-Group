#include "LandAnimal.h"

LandAnimal::LandAnimal(int _x, int _y): Animal(_x, _y){
	
}

LandAnimal::LandAnimal(const LandAnimal& la): Animal(la){
	
}

LandAnimal::~LandAnimal(){
	
}
	
string LandAnimal::getTipeHabitat(){
	return tipeHabitat;
}
