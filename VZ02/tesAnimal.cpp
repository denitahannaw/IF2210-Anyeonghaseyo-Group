#include "Animal.cpp"
#include <iostream>

int main(){
	Animal kodok(5,10,"frog");
	
	cout << kodok.getX() << endl;
	cout << kodok.getY() << endl;
	
	kodok.setX(10);
	kodok.setY(5);
	cout << kodok.getX() << endl;
	cout << kodok.getY() << endl;
	
	cout << kodok.getTipeHabitat(0) << endl;
	cout << kodok.getTipeHabitat(1) << endl;
	cout << kodok.getTipeAnimal() << endl;
	cout << kodok.getSimbol() << endl;
	
	
	cout << kodok.getMusuh(0) << endl;
	cout << kodok.getMusuh(1) << endl;
		
	cout << kodok.interact() << endl;
	
	return 0;
}
