#ifndef VIRTUALZOO_H
#define VIRTUALZOO_H
#include <string>
#include "file_reader.h"

#include "matrix_cell.h"
#include "Cell.h"
//#include "LandHabitat.h"
//#include "AirHabitat.h"
//#include "WaterHabitat.h"
//#include "Restourant.h"
//#include "Park.h"
//#include "Road.h"
//#include "Exit.h"
//#include "Entrance.h"
#include "View.h"

#include "Cage.h"
//#include "Cat.h" //1
//#include "Dog.h" //2
//#include "Lion.h" //3
//#include "Snake.h" //4
//#include "Goat.h" //5
//#include "Chicken.h" //6
//#include "Elephant.h" //7
//#include "Cow.h" //8
//#include "Hedgehog.h" //9
//#include "Rhino.h" //10
//#include "Fish.h" //11
//#include "Crocodile.h" //12
//#include "Frog.h" //13
//#include "Duck.h" //14
//#include "Beetle.h" //15
//#include "Bee.h" //16
//#include "Owl.h" //17
//#include "Eagle.h" //18
//#include "Butterfly.h" //19
//#include "Bird.h" //20
//#include "Flyingfish.h" //21

#include "Visitor.h"
#include <iostream>
#include <unistd.h>
using namespace std;

class VirtualZoo {
public:
	VirtualZoo(string input_file);
	~VirtualZoo();
	void AddZooToMaps();
	void AddCageToMaps();
	void AddAnimalToMaps();
	void AddVisitorToMaps();

	bool IsInRage(int,int,int,int);
	bool IsInRage(int,int);

	void PrintVirtualZoo();
	void PrintVirtualZoo(int,int,int,int);

	void MoveAnimal();
	void Interact();
	void PrintInteraction(int x, int y);
	int GetTotalMakanan();

	Cell* GetEntrance();

	void MoveVisitor();
	bool IsVisited(Cell* cel);
	bool IsEndOfTour();

	void Tour();

private:

	MatrixCell* matriks_cell;
		
	int n_entrance;
	Cell** list_entrance;
	int n_exit;
	Cell** list_exit;

	int n_cage;
	Cage** cages;
	View* maps;	

	Visitor* person;

	int n_road; //termasuk entrance n exit
	Cell** list_visited;
	int current_visited;
	int n_visited;
};
#endif
