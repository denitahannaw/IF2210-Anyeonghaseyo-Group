#ifndef FILEREADER_H
#define FILEREADER_H

#include <string>
#include <iostream>     // std::cin, std::cout
#include <fstream>      // std::ifstream

using namespace std;
/**
* @class FileReader
* Kelas FileReader adalah kelas untuk membaca konfigurasi Zoo dari file teks
*/
class FileReader {
public:
	/**
	* @brief Constructor FileReader
	* @param namafile Namafile yang akan dibaca
	*/
	FileReader(string namafile);
	/**
	* @brief Destruktor
	*/
	~FileReader();

	/**
	* @brief Membaca seluruh file 
	*/
	void Read();

	/**
	* @brief Getter. Mendapatkan total nilai cageArea
	*/
	int GetSumCageArea();
	/**
	* @brief Getter. Mendapatkan nilai baris area Zoo
	* @return nbrs
	*/
	int GetNBrs();
	/**
	* @brief Getter. Mendapatkan nilai kolom area Zoo
	* @return nkol
	*/
	int GetNKol();
	/**
	* @brief Getter. Mendapatkan jumlah tipe Cell yang ada
	* @return nCellType
	*/
	int GetNCellType();
	/**
	* @brief Getter. Mendapatkan jumlah Cage yang akan dibuat
	* @return nCage
	*/
	int GetNCage();

	/**
	* @brief Getter. Mendapatkan tipe Cell ke i
	* @param i Index tipe Cell yang akan dikembalikan
	* @return listCellType[i]
	*/
	string GetCellType(int i);
	/**
	* @brief Getter. Mendapatkan simbol Cell ke i
	* @param i Index simbol Cell yang akan dikembalikan
	* @return listCellSimbol[i]
	*/
	char GetCellSimbol(int i);
	/**
	* @brief Getter. Mendapatkan simbol Cell pada maps[i][j]
	* @param i Index baris maps
	* @param j Indeks kolom maps
	* @return maps[i][j]
	*/
	char GetMaps(int i, int j);
	/**
	* @brief Getter. Mendapatkan tipe Cage ke i
	* @param i Index tipe Cage yang akan dikembalikan
	* @return listCageType[i]
	*/
	string GetCageType(int i);
	/**
	* @brief Getter. Mendapatkan simbol Cage ke i
	* @param i Index simbol Cage yang akan dikembalikan
	* @return listCageSimbol[i]
	*/
	char GetCageSimbol(int i);
	/**
	* @brief Getter. Mendapatkan area Cage ke i
	* @param i Index area Cage yang akan dikembalikan
	* @return listNCageArea[i]
	*/
	int GetNCageArea(int i);
	/**
	* @brief Getter. Mendapatkan jumlah Animal ke i
	* @param i Index jumlah Animal yang akan dikembalikan
	* @return listNAnimal[i]
	*/
	int GetNAnimal(int i);
	/**
	* @brief Getter. Mendapatkan posisi X Cell Cage ke i
	* @param i Index posisi X Cell Cage yang akan dikembalikan
	* @return listPos[i][0]
	*/
	int GetPosX(int i);
	/**
	* @brief Getter. Mendapatkan posisi Y Cell Cage ke i
	* @param i Index posisi Y Cell Cage yang akan dikembalikan
	* @return listPos[i][1]
	*/
	int GetPosY(int i);

private:
	fstream file;
	string filename;
	int nbrs, nkol; /**< nbrs adalah jumlah baris area Zoo,
						 nkol adalah jumlah kolom area Zoo */
	int nCellType; /**< nCellType adalah jumlah tipe Cell yang ada */
	string * listCellType; /**< listCellType adalah list nama tipe Cell:
								airhabitat
								waterhabitat
								landhabitat
								road
								park
								restourant 
								entrance
								exit*/
	char * listCellSimbol; /**< listCellSimbol adalah list karakter simbol Cell
								# airhabitat
								~ waterhabitat
								@ landhabitat
								- road
								* park
								$ restourant 
								\ entrance
								/ exit*/
	char ** maps; /**< peta zoo */
	int nCage; /**< jumlah Cage yang akan dibangun */
	char * listCageSimbol; /**< listCageSimbol adalah list karakter simbol Cage */
	string * listCageType; /**< listCageType adalah list tipe habitat Cage */
	int* listNCageArea; /**< listNCageArea adalah jumlah Cell yang akan dibangun pada masing2 Cage */
	int* listNAnimal; /**< listNAnimal adalah jumlah animal yang akan diciptakan pada masing2 Cage*/
	int** listPos; /**< listPos adalah list dari posisi Cage yang akan dibangun */
};
#endif