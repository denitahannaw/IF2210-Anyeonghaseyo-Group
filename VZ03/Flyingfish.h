#ifndef FLYINGFISH_H
#define FLYINGFISH_H

#include "FlyingAnimal.h"
#include "WaterAnimal.h"
#include "Karnivora.h"
/**
* @class Flyingfish
* Merupakan Animal yang tinggal di air dan udara dan merupakan Karnivora
*/
class Flyingfish: public FlyingAnimal, public WaterAnimal, public Karnivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Flyingfish
	* @param _y posisi y awal Flyingfish
	*/
	Flyingfish(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Flyingfish();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Flyingfish
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Flyingfish
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Flyingfish
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Flyingfish
	* @return musuh[i]
	*/
	string getMusuh(int i);

	// int getX();
	// int getY();
	// void setX(int);
	// void setY(int);
	
	/**
	* @brief Mendapatkan reaksi Flyingfish saat berinteraksi
	* dengan pengunjung
	* @return "flysplash"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();

	// string getTipeHabitat();
	
protected:
	const string tipeAnimal = "flyingfish";
	const char simbol = 'y';
	int bobot;
	string* musuh;
};
#endif
