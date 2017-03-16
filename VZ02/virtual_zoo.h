#ifndef VIRTUALZOO_H
#define VIRTUALZOO_H
#include <string>
#include "file_reader.h"
#include "matrix_cell.h"
#include "Cell.h"
#include "View.h"
#include "Cage.h"
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
