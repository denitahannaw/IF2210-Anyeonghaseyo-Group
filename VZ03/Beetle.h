#ifndef BEETLE_H
#define BEETLE_H

#include "FlyingAnimal.h"
#include "Herbivora.h"
/**
* @class Beetle
* Merupakan Animal yang tinggal di udara dan merupakan Herbivora
*/
class Beetle: public FlyingAnimal, public Herbivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Beetle
	* @param _y posisi y awal Beetle
	*/
	Beetle(int _x, int _y);
	/**
	* @brief Destructor
	*/
	~Beetle();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Beetle
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Beetle
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Beetle
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Beetle
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Beetle saat berinteraksi
	* dengan pengunjung
	* @return "kepakkepak"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "beetle";
	const char simbol = 'q';
	int bobot;
	string* musuh;
};
#endif
