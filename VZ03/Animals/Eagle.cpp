#include "Eagle.h"

Eagle::Eagle(int _x, int _y): FlyingAnimal(_x, _y){
	bobot = 12;
	musuh[0] = "bird";
	musuh[1] = "butterfly";
}

Eagle::~Eagle(){

}
	
string Eagle::getMusuh(int i){
	return musuh[i];
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
