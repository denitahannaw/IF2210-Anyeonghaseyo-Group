#ifndef CAGE_H
#define CAGE_H

#include <string>
#include "Cell.h"
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

using namespace std;

/**
* @class Cage
* Merupakan Cage yang terdiri dari beberapa petak Cell
* pada habitat tertentu.
*/
class Cage: public Renderable{
public:
	//Cage();
	/**
	* @brief Constructor
	* Membangun cage
	* @param simbol Simbol dari cage
	* @param tipehabitat Tipe habitat cage
	* @param cageArea Luas cage / jumlah cell
	*/
	Cage(char simbol, string tipeHabitat, int cageArea);

	/**
	* @brief Destructor
	*/
	~Cage();

	/**
	* @brief Getter cageArea.
	* Mendapatkan banyak petak maksimal yang dapat dibangun
	* @return cageArea 
	*/
	int getCageArea();

	/**
	* @brief Getter nArea.
	* Mendapatkan jumlah petak yang telah dibangun
	* @return nArea
	*/
	int getNArea();

	/**
	* @brief Getter nAnimal.
	* Mendapatkan jumlah Animal yang terdapat pada cage
	* @return nAnimal
	*/
	int getNAnimal();
	
	/**
	* @brief Getter tipeHabitat
	* Mendapatkan tipe habitat Cage
	* @return tipeHabitat
	*/
	string getTipeHabitat();

	/**
	* @brief Getter Cage Position
	* Mendapatkan listOfCagePosition[i]
	* @param i index listOfCagePosition
	* @return listOfCagePosition[i]
	*/	
	Cell* getCagePosition(int i);

	/**
	* @brief Getter Animal
	* Mendapatkan Animal pada indeks i (animals[i])
	* @param i Index Animal yang akan diambil
	* @return animals[i]
	*/
	Animal* getAnimal(int i);

	/**
	* @brief max animal
	* Maksimal animal dalam cage = 30% dari cageArea
	* @return 30%*cageArea;
	*/
	int getMaxAnimal();

	/**
	* @brief Setter 
	* Set cageArea=area
	* @param area cageArea baru
	*/
	void setCageArea(int area);

	/**
	* @brief Setter listOfCagePosition.
	* Menambahkan posisi cell tempat didirikannya cage
	* @param position Posisi cage
	*/
	void addCagePosition(Cell* position);

	/**
	* @brief Setter animals.
	* Menambahkan Animal dalam cage jika masih bisa ditambahkan.
	* Harus dipastikan jumlah Animal tidak melebihi kapasitasnya
	* @param anim Animal yang akan ditambahkan
	*/
	void addAnimal(Animal* anim);

	/**
	* @brief Menentukan apakah suatu cell cage telah ditempati animal atau belum
	* @param c Cell
	* @return true jika posisi c belum ditempati animal,
	*		  false jika sebaliknya
	*/
	bool isPositionEmpty(Cell* c);
	
	/**
	* @brief getter SIMBOL
	* Mengembalikan nilai SIMBOL
	* @return SIMBOL
	*/
	char render();

	/**
	* @brief Setter
	* Menambahkan 1 animal secara random berdasarkan tipeHabitat
	*/
	// void createAnimal();


private:
	char simbol; /**< simbol adalah karakter simbol dari Cage */
	string tipeHabitat; /**< tipeHabitat adalah tipe habitat tempat Cage didirikan */
	int cageArea=50; /**< cageArea adalah jumlah petak maksimal yang dapat dibagun */
	int nArea; /**< nArea adalah jumlah petak yang dibangun */
	int nAnimal; /**< nAnimal adalah jumlah Animal dalam Cage */
	Cell ** listOfCagePosition; /**< listOfCagePosition adalah list posisi petak2 tempat Cage didirikan*/
	Animal ** animals; /**< animals adalah list Animal yang ada dalam Cage */
};

#endif