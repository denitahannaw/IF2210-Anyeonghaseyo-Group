#include "Owl.h"

Owl::Owl(int _x, int _y): FlyingAnimal(_x, _y), Animal(_x,_y){
	bobot = 7;
	musuh = new string[2];
	musuh[0] = "bee";
	musuh[1] = "beetle";
}

Owl::~Owl(){

}
	
string Owl::getMusuh(int i){
	return musuh[i];
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
