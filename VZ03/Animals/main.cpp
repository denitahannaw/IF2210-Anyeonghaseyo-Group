#include "Flyingfish.h"
#include <iostream>

int main(){
	
	Flyingfish singa(5, 10);
	
	cout << singa.getX() << endl;
	cout << singa.getY() << endl;
	
	singa.Flyingfish::setX(10);
	singa.Flyingfish::setY(5);
	cout << singa.getX() << endl;
	cout << singa.getY() << endl;
	
	//cout << singa.getTipeHabitat() << endl;
	cout << singa.getTipeAnimal() << endl;
	cout << singa.getSimbol() << endl;
	cout << singa.getBobot() << endl;
	singa.addBobot();
	cout << singa.getBobot() << endl;
	cout << singa.getMusuh(0) << endl;
	cout << singa.getMusuh(1) << endl;
		
	cout << singa.interact() << endl;
	return 0;
}
