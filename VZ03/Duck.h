#ifndef DUCK_H
#define DUCK_H

#include "WaterAnimal.h"
#include "Omnivora.h"
/**
* @class Duck
* Merupakan Animal yang tinggal di air dan merupakan Omnivora
*/
class Duck: public WaterAnimal, public Omnivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Duck
	* @param _y posisi y awal Duck
	*/
	Duck(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Duck();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Duck
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Duck
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Duck
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Duck
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Duck saat berinteraksi
	* dengan pengunjung
	* @return "kwekwek"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "duck";
	const char simbol = 'k';
	int bobot;
	string* musuh;
};
#endif
