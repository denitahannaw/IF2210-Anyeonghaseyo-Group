#include "WaterAnimal.h"

WaterAnimal::WaterAnimal(int _x, int _y): Animal(_x, _y){
	
}

WaterAnimal::WaterAnimal(const WaterAnimal& wa): Animal(wa){
	
}

WaterAnimal::~WaterAnimal(){
	
}
	
string WaterAnimal::getTipeHabitat(){
	return tipeHabitat;
}
