#ifndef OWL_H
#define OWL_H

#include "FlyingAnimal.h"
#include "Karnivora.h"
/**
* @class Owl
* Merupakan Animal yang tinggal di udara dan merupakan Karnivora
*/
class Owl: public FlyingAnimal, public Karnivora{
public:
	/**
	* @brief Constructor
	* @param _x posisi x awal Owl
	* @param _y posisi y awal Owl
	*/
	Owl(int _x,int _y);
	/**
	* @brief Destructor
	*/
	~Owl();
	/**
	* @brief Menambahkan bobot satu satuan
	*/
	void addBobot();
	/**
	* @brief Mendapatkan nilai bobot dari Owl
	* @return bobot
	*/
	int getBobot();
	/**
	* @brief Mendapatkan simbol dari Owl
	* @return simbol
	*/
	char getSimbol();
	/**
	* @brief Mendapatkan musuh ke i dari Owl
	* Musuh merupakan Animal lain yang tidak bisa tinggal
	* dalam satu kandang dengan Owl
	* @return musuh[i]
	*/
	string getMusuh(int i);
	/**
	* @brief Mendapatkan reaksi Owl saat berinteraksi
	* dengan pengunjung
	* @return "uhukuhuk"
	*/
	string interact();
	/**
	* @brief Mendapatkan tipe Animal (nama spesies)
	* @return tipeAnimal
	*/
	string getTipeAnimal();
	
protected:
	const string tipeAnimal = "owl";
	const char simbol = 'o';
	int bobot;
	string* musuh;
};
#endif
