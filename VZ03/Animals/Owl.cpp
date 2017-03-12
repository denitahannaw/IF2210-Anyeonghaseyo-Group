#include "Owl.h"

Owl::Owl(int _x, int _y): FlyingAnimal(_x, _y){
	bobot = 7;
}

Owl::~Owl(){

}
	
void Owl::addBobot(){
	bobot++;
}

int Owl::getBobot(){
	return bobot;
}

char Owl::getSimbol(){
	return simbol;
}
	
string Owl::interact(){
	return "uhukuhuk";
}

string Owl::getTipeAnimal(){
	return tipeAnimal;
}
