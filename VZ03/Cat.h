#ifndef CAT_H
#define CAT_H

#include "LandAnimal.h"
#include "Karnivora.h"
/**
* @class Cat
* Merupakan Animal yang tinggal di darat dan merupakan Karnivora
*/
class Cat: public LandAnimal, public Karnivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Cat
	* @param _y posisi y awal Cat
	*/
	Cat(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Cat();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Cat
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Cat
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Cat
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Cat
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Cat saat berinteraksi
	* dengan pengunjung
	* @return "meowmeow"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "cat";
	const char simbol = 'c';
	int bobot;
	string* musuh;
};
#endif
