#include "Flyingfish.h"

Flyingfish::Flyingfish(int _x, int _y): WaterAnimal(_x, _y), FlyingAnimal(_x, _y), Animal(_x,_y){
	bobot = 10;
	musuh = new string[2];
	musuh[0] = "frog";
	musuh[1] = "rhino";
}

Flyingfish::~Flyingfish(){

}

string Flyingfish::getMusuh(int i){
	return musuh[i];
}
	
void Flyingfish::addBobot(){
	bobot++;
}

int Flyingfish::getBobot(){
	return bobot;
}

char Flyingfish::getSimbol(){
	return simbol;
}
	
string Flyingfish::interact(){
	return "flysplash";
}

string Flyingfish::getTipeAnimal(){
	return tipeAnimal;
}

// int Flyingfish::getX(){
// 	return WaterAnimal::x;
// }

// int Flyingfish::getY(){
// 	return WaterAnimal::y;
// }

// void Flyingfish::setX(int _x){
// 	WaterAnimal::x = _x;
// 	FlyingAnimal::x = _x;
// }

// void Flyingfish::setY(int _y){
// 	WaterAnimal::y = _y;
// 	FlyingAnimal::y = _y;
// }

// string Flyingfish::getTipeHabitat(){}