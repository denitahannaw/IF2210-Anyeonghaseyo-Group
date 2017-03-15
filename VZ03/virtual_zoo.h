#ifndef VIRTUALZOO_H
#define VIRTUALZOO_H
#include <string>
#include "file_reader.h"

#include "matrix_cell.h"
#include "Cell.h"
#include "LandHabitat.h"
#include "AirHabitat.h"
#include "WaterHabitat.h"
#include "Restourant.h"
#include "Park.h"
#include "Road.h"
#include "Exit.h"
#include "Entrance.h"
#include "View.h"

#include "Cage.h"
#include "Cat.h" //1
#include "Dog.h" //2
#include "Lion.h" //3
#include "Snake.h" //4
#include "Goat.h" //5
#include "Chicken.h" //6
#include "Elephant.h" //7
#include "Cow.h" //8
#include "Hedgehog.h" //9
#include "Rhino.h" //10
#include "Fish.h" //11
#include "Crocodile.h" //12
#include "Frog.h" //13
#include "Duck.h" //14
#include "Beetle.h" //15
#include "Bee.h" //16
#include "Owl.h" //17
#include "Eagle.h" //18
#include "Butterfly.h" //19
#include "Bird.h" //20
#include "Flyingfish.h" //21

#include "Visitor.h"
#include <iostream>
#include <unistd.h>
using namespace std;

class VirtualZoo {
public:
	
	/**
	* @brief Constructor
	* @param input_file Nama file input yang berisi konfigurasi Zoo
	*/
	VirtualZoo(string input_file);
	/**
	* @brief Destructor
	*/
	~VirtualZoo();
	/**
	* @brief Menambahkan simbol2 dari lingkungan Zoo ke Maps
	*/
	void AddZooToMaps();
	/**
	* @brief Menambahkan simbol2 dari Cage ke Maps
	*/
	void AddCageToMaps();
	/**
	* @brief Menambahkan simbol2 dari Animal ke Maps
	*/
	void AddAnimalToMaps();
	/**
	* @brief Menambahkan simbol dari Visitor ke Maps
	*/
	void AddVisitorToMaps();
	/**
	* @brief Menentukan apakah suatu area masih dalam 
	* jangkauan area Virtual Zoo 
	* @param kiri Indeks batas kiri Virtual Zoo
	* @param atas Indeks batas atas Virtual Zoo
	* @param kanan Indeks batas kanan Virtual Zoo
	* @param bawah Indeks batas bawah Virtual Zoo
	* @return true jika masih dalam jangkauan,
			  false jika diluar jangkauan
	*/
	bool IsInRage(int kiri,int atas,int kanan,int bawah);
	/**
	* @brief Menentukan apakah suatu titik masih di dalam 
	*  area Virtual Zoo 
	* @param x 
	* @param y
	* @return true jika masih dalam jangkauan,
	*		  false jika diluar jangkauan
	*/
	bool IsInRage(int x,int y);

	/**
	* @brief Mencetak seluruh peta dan komponen Virtual Zoo
	*/
	void PrintVirtualZoo();
	/**
	* @brief Mencetak peta dan komponen Virtual Zoo pada
	* area tertentu
	* @param kiri Indeks batas kiri Virtual Zoo
	* @param atas Indeks batas atas Virtual Zoo
	* @param kanan Indeks batas kanan Virtual Zoo
	* @param bawah Indeks batas bawah Virtual Zoo
	*/
	void PrintVirtualZoo(int kiri,int atas,int kanan,int bawah);
	/**
	* @brief Memindahkan posisi Animal pada Virtual Zoo
	*/
	void MoveAnimal();
	/**
	* @brief Mencetak seluruh interaksi yang dialami visitor
	*/
	void Interact();
	/**
	* @brief Mencetak interaksi yang dialami visitor oleh Cage
	* yang berada di koordinat (x,y)
	* @param x Posisi x dari Cage
	* @param y Posisi y dari Cage
	*/
	void PrintInteraction(int x, int y);
	/**
	* @brief mendapatkan total makanan yang diperlukan Virtual Zoo
	* @return total_makanan
	*/
	int GetTotalMakanan();
	/**
	* @brief Mendapatkan cell yang merupakan entrance random dari seluruh
	* entrance yang ada
	*/
	Cell* GetEntrance();
	/**
	* @brief Memindahkan posisi visitor ke road terdekat
	*/
	void MoveVisitor();
	/**
	* @brief Menentukan suatu cell apakah sudah pernah dikunjungi
	* atau belum
	* @param cel Cell yang dites
	* @return true Jika cel pernah dikunjungi,
	*		  false Jika cel belum pernah dikunjungi
	*/
	bool IsVisited(Cell* cel);
	/**
	* @brief Menentukan apakah posisi visitor berada pada
	* cell exit
	* @return true Jika posisi visitor berada pada cell exit,
	*		  false Jika posisi visitor tidak berada pada cell exit
	*/
	bool IsEndOfTour();
	/**
	* @brief Melakukan tour zoo. Menggerakkan visitor dari entrance
	* sampai ke exit
	*/
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