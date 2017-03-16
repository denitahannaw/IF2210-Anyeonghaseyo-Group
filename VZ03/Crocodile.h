#ifndef CROCODILE_H
#define CROCODILE_H

#include "WaterAnimal.h"
#include "Karnivora.h"
/**
* @class Crocodile
* Merupakan Animal yang tinggal di air dan merupakan Karnivora
*/
class Crocodile: public WaterAnimal, public Karnivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Crocodile
	* @param _y posisi y awal Crocodile
	*/
	Crocodile(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Crocodile();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Crocodile
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Crocodile
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Crocodile
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Crocodile
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Crocodile saat berinteraksi
	* dengan pengunjung
	* @return "splashsplash"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "crocodile";
	const char simbol = 'j';
	int bobot;
	string* musuh;
};
#endif
