#include "Eagle.h"

Eagle::Eagle(int _x, int _y): FlyingAnimal(_x, _y){
	bobot = 12;
}

Eagle::~Eagle(){

}
	
void Eagle::addBobot(){
	bobot++;
}

int Eagle::getBobot(){
	return bobot;
}

char Eagle::getSimbol(){
	return simbol;
}
	
string Eagle::interact(){
	return "gakgak";
}

string Eagle::getTipeAnimal(){
	return tipeAnimal;
}
