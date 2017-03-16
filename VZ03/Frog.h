#ifndef FROG_H
#define FROG_H

#include "LandAnimal.h"
#include "WaterAnimal.h"
#include "Karnivora.h"
/**
* @class Frog
* Merupakan Animal yang tinggal di darat dan air dan merupakan Karnivora
*/
class Frog: public LandAnimal, public WaterAnimal, public Karnivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Frog
	* @param _y posisi y awal Frog
	*/
	Frog(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Frog();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Frog
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Frog
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Frog
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Frog
	* @return musuh[i]
	*/
	string getMusuh(int i);
	// int getX();
	// int getY();
	// void setX(int);
	// void setY(int);
	
	/**
	* @brief Mendapatkan reaksi Frog saat berinteraksi
	* dengan pengunjung
	* @return "ribbit"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	string getTipeHabitat();
	
protected:
	const string tipeAnimal = "frog";
	const char simbol = 'f';
	int bobot;
	string* musuh;
};
#endif
