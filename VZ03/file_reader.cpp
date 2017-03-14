#include "file_reader.h"

/**
* @brief Constructor FileReader
* @param namafile Namafile yang akan dibaca
*/
FileReader::FileReader(string namafile) {
	filename = namafile;

	file.open(filename);
}

/**
* @brief Destruktor
*/
FileReader::~FileReader() {
	file.close();

	delete [] listCellType;
	delete [] listCellSimbol;
	delete [] listCageSimbol;
	delete [] listCageType;
	delete [] listNAnimal;

	for(int i=0; i<nbrs; i++) {
		delete [] maps[i];
	}
	delete [] maps;

	for(int i=0; i<GetSumCageArea(); i++) {
		delete [] listPos[i];
	}
	delete [] listPos;

	delete [] listNCageArea;
}
/**
* @brief Membaca seluruh file 
*/
void FileReader::Read() {
	file >> nbrs >> nkol;
	// cout<<nbrs<<" "<< nkol<<endl;

	file >> nCellType;
	listCellType = new string[nCellType];
	listCellSimbol = new char[nCellType];
	for(int i=0; i<nCellType; i++) {
		file >> listCellSimbol[i] >> listCellType[i];
		// cout << listCellSimbol[i] << " " << listCellType[i] <<endl;
	}

	maps = new char*[nbrs];
	for(int i=0; i<nbrs; i++) {
		maps[i] = new char[nkol];
	}

	for(int i=0; i<nbrs; i++) {
		for(int j=0; j<nkol; j++) {
			file >> maps[i][j];
			// cout << maps[i][j];
		}
		// cout << endl;
	}

	file >> nCage;
	listCageSimbol = new char[nCage];
	listCageType = new string[nCage];
	listNCageArea = new int[nCage];
	for(int i=0; i<nCage; i++){
		file >> listCageSimbol[i];
		file >> listCageType[i];
		file >> listNCageArea[i];

		// cout << listCageSimbol[i] << " ";
		// cout << listCageType[i] << " ";
		// cout << listNCageArea[i] << " ";
		// cout << endl;
	}

	// cout <<"sum area = "<< GetSumCageArea() << endl;
	listNAnimal = new int[nCage];
	listPos = new int*[GetSumCageArea()];
	for(int i=0; i<GetSumCageArea(); i++) {
		listPos[i] = new int [2];
	}

	int c=0;
	int d=0;
	for(int i=0; i<nCage; i++) {
		for(int j=0; j<listNCageArea[i]; j++) {
			file >> listPos[c][0] >> listPos[c][1];
			// cout << listPos[c][0] <<" "<< listPos[c][1] << endl;
			c++;
		}
		file >> listNAnimal[d];
		// cout << "nAnimal:" <<listNAnimal[d] <<endl;
		d++;
	}
}

int FileReader::GetSumCageArea(){
	int sum=0;
	for(int i=0; i<nCage; i++){
		sum = sum + listNCageArea[i];	
	}

	return sum;
}

/**
* @brief Getter. Mendapatkan nilai baris area Zoo
* @return nbrs
*/
int FileReader::GetNBrs() {
	return nbrs;
}
/**
* @brief Getter. Mendapatkan nilai kolom area Zoo
* @return nkol
*/
int FileReader::GetNKol() {
	return nkol;
}
/**
* @brief Getter. Mendapatkan jumlah tipe Cell yang ada
* @return nCellType
*/
int FileReader::GetNCellType() {
	return nCellType;
}
/**
* @brief Getter. Mendapatkan jumlah Cage yang akan dibuat
* @return nCage
*/
int FileReader::GetNCage() {
	return nCage;
}

/**
* @brief Getter. Mendapatkan tipe Cell ke i
* @param i Index tipe Cell yang akan dikembalikan
* @return listCellType[i]
*/
string FileReader::GetCellType(int i) {
	return listCellType[i];
}
/**
* @brief Getter. Mendapatkan simbol Cell ke i
* @param i Index simbol Cell yang akan dikembalikan
* @return listCellSimbol[i]
*/
char FileReader::GetCellSimbol(int i) {
	return listCellSimbol[i];
}
/**
* @brief Getter. Mendapatkan simbol Cell pada maps[i][j]
* @param i Index baris maps
* @param j Indeks kolom maps
* @return maps[i][j]
*/
char FileReader::GetMaps(int i, int j) {
	return maps[i][j];
}
/**
* @brief Getter. Mendapatkan tipe Cage ke i
* @param i Index tipe Cage yang akan dikembalikan
* @return listCageType[i]
*/
string FileReader::GetCageType(int i) {
	return listCageType[i];
}
/**
* @brief Getter. Mendapatkan simbol Cage ke i
* @param i Index simbol Cage yang akan dikembalikan
* @return listCageSimbol[i]
*/
char FileReader::GetCageSimbol(int i) {
	return listCageSimbol[i];
}
/**
* @brief Getter. Mendapatkan area Cage ke i
* @param i Index area Cage yang akan dikembalikan
* @return listNCageArea[i]
*/
int FileReader::GetNCageArea(int i) {
	return listNCageArea[i];
}
/**
* @brief Getter. Mendapatkan jumlah Animal ke i
* @param i Index jumlah Animal yang akan dikembalikan
* @return listNAnimal[i]
*/
int FileReader::GetNAnimal(int i) {
	return listNAnimal[i];
}
/**
* @brief Getter. Mendapatkan posisi X Cell Cage ke i
* @param i Index posisi X Cell Cage yang akan dikembalikan
* @return listPos[i][0]
*/
int FileReader::GetPosX(int i) {
	return listPos[i][0];
}
/**
* @brief Getter. Mendapatkan posisi Y Cell Cage ke i
* @param i Index posisi Y Cell Cage yang akan dikembalikan
* @return listPos[i][1]
*/
int FileReader::GetPosY(int i) {
	return listPos[i][1];
}