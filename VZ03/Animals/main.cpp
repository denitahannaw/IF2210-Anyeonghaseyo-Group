#include "Lion.cpp"
#include <iostream>

int main(){
	
	Lion singa(5, 10);
	
	cout << singa.getX() << endl;
	cout << singa.getY() << endl;
	
	singa.setX(10);
	singa.setY(5);
	cout << singa.getX() << endl;
	cout << singa.getY() << endl;
	
	cout << singa.getTipeHabitat() << endl;
	cout << singa.getTipeAnimal() << endl;
	cout << singa.getSimbol() << endl;
	cout << singa.getBobot() << endl;
	cout << singa.getMusuh(0) << endl;
	cout << singa.getMusuh(1) << endl;
		
	cout << singa.interact() << endl;
	return 0;
}
