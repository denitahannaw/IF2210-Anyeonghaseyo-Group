#ifndef EAGLE_H
#define EAGLE_H

#include "FlyingAnimal.h"
#include "Karnivora.h"
/**
* @class Eagle
* Merupakan Animal yang tinggal di udara dan merupakan Karnivora
*/
class Eagle: public FlyingAnimal, public Karnivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Eagle
	* @param _y posisi y awal Eagle
	*/
	Eagle(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Eagle();
	/**
	* @brief Menambahkan bobot satu satuasn
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Eagle
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Eagle
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Eagle
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Eagle
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Eagle saat berinteraksi
	* dengan pengunjung
	* @return "gakgak"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "eagle";
	const char simbol = 'a';
	int bobot;
	string* musuh;
};
#endif
