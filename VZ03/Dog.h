#ifndef DOG_H
#define DOG_H

#include "LandAnimal.h"
#include "Karnivora.h"
/**
* @class Dog
* Merupakan Animal yang tinggal di darat dan merupakan Karnivora
*/
class Dog: public LandAnimal, public Karnivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Dog
	* @param _y posisi y awal Dog
	*/
	Dog(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Dog();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Dog
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Dog
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Dog
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Dog
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Dog saat berinteraksi
	* dengan pengunjung
	* @return "barkbark"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();

	
protected:
	const string tipeAnimal = "dog";
	const char simbol = 'd';
	int bobot;
	string* musuh;
};
#endif
