#include "Frog.h"

Frog::Frog(int _x, int _y): LandAnimal(_x, _y), WaterAnimal(_x, _y), Animal(_x,_y){
	bobot = 5;
	musuh = new string[2];
	musuh[0] = "rhino";
	musuh[1] = "flyingfish";
}

Frog::~Frog(){

}

string Frog::getMusuh(int i){
	return musuh[i];
}
	
void Frog::addBobot(){
	bobot++;
}

int Frog::getBobot(){
	return bobot;
}

char Frog::getSimbol(){
	return simbol;
}
	
string Frog::interact(){
	return "ribbit";
}

string Frog::getTipeAnimal(){
	return tipeAnimal;
}

// int Frog::getX(){
// 	return LandAnimal::x;
// }

// int Frog::getY(){
// 	return LandAnimal::y;
// }

// void Frog::setX(int _x){
// 	LandAnimal::x = _x;
// 	WaterAnimal::x = _x;
// }

// void Frog::setY(int _y){
// 	LandAnimal::y = _y;
// 	WaterAnimal::y = _y;
// }

string  Frog::getTipeHabitat(){}