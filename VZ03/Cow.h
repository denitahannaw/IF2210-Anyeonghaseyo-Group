#ifndef COW_H
#define COW_H

#include "LandAnimal.h"
#include "Herbivora.h"

/**
* @class Cow
* Merupakan Animal yang tinggal di darat dan merupakan Herbivora
*/
class Cow: public LandAnimal, public Herbivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Cow
	* @param _y posisi y awal Cow
	*/
	Cow(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Cow();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Cow
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Cow
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Cow
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Cow
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Cow saat berinteraksi
	* dengan pengunjung
	* @return "mooow"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "cow";
	const char simbol = 'w';
	int bobot;
	string* musuh;
};
#endif
