#include <iostream>
#include <string>

#include "Matriks.h"
#include "Cell.h"


using namespace std;

void initiateZoo(Matriks<Cell*>& z);
// void initiateCage(int nCage, Cage ** cages, Zoo& z);
// void initiateAnimal(int nCage, Cage ** cages);
// void addZooToMaps(View& p, Zoo& z);
// void addCageToMaps(int nCage, Cage ** c, View& p);

int main(){
	//1. Ciptakan Zoo
	int brs, kol;
	cin>>brs>>kol;
	Matriks<Cell*> bonbin(brs, kol);
	Matriks<char> peta(brs, kol);

	//2. Ciptakan lingkungan zoo dari input file
	initiateZoo(bonbin);
	
	//3. Ciptakan kandang
	// int nCage;
	// cin>>nCage;
	// Cage ** cages = new Cage*[nCage];

	//inisialisasi setiap cage
	// initiateCage(nCage, cages, bonbin);
	
	//4. Ciptakan binatang ditiap kandang
	// initiateAnimal(nCage, cages);

	//Pindahin ke peta
	// addZooToMaps(peta,bonbin);

	// addCageToMaps(nCage, cages, peta);

	// peta.printView();
	return 0;
}

/**
* @brief menginisialisasi lingkungan Zoo.
* @param z Container Zoo
*/
void initiateZoo(Matriks<Cell*> & z){
	//menyimpan jenis Cell yang ada
	// int nJenisCell;
	// cin>>nJenisCell;
	// char simbolCell[nJenisCell];
	// string* tipeCell = new string[nJenisCell];
	// for(int i=0; i<nJenisCell; i++){
	// 	cin>>simbolCell[i];
	// 	cin>>tipeCell[i];

	// }

	// //inisialisasi Cell Zoo
	// char c;
	// for(int i=0; i<z.getNbrs(); i++){
	// 	for(int j=0; j<z.getNkol(); j++){
	// 		cin>>c;
			
	// 		//cari index jenis Cell
	// 		int k=0;
	// 		bool found = false;
	// 		while (k<nJenisCell && !found){
	// 			if (c==simbolCell[k]){
	// 				found = true;
	// 			}else
	// 				k++;
	// 		}

			
	// 		//inisialisasi
	// 		if (tipeCell[k]=="airhabitat"){
	// 			z.setCell(new AirHabitat(i,j,simbolCell[k]), i, j);
	// 		}else if (tipeCell[k]=="waterhabitat"){
	// 			z.setCell(new WaterHabitat(i,j,simbolCell[k]), i, j);
	// 		}else if (tipeCell[k]=="landhabitat"){
	// 			z.setCell(new LandHabitat(i,j,simbolCell[k]), i, j);
	// 		}else if (tipeCell[k]=="road"){
	// 			z.setCell(new Road(i,j,simbolCell[k]), i, j);
	// 		}else if(tipeCell[k]=="park"){
	// 			z.setCell(new Park(i,j,simbolCell[k]), i, j);
	// 		}else if(tipeCell[k]=="restourant"){
	// 			z.setCell(new Restourant(i,j,simbolCell[k]), i, j);
	// 		}
			

	// 	}
	// }

}

// void initiateCage(int nCage, Cage ** cages, Zoo& z){
// 	char simbol; string tipeHabitat; int cageArea;
// 	for(int i=0; i<nCage; i++){
// 		cin>>simbol>>tipeHabitat>>cageArea;
// 		cages[i]= new Cage(simbol, tipeHabitat, cageArea);

// 		int x,y;
// 		int c=0;
// 		for(int j=0; j<cageArea; j++){
// 			//posisi pada zoo
// 			cin>>x>>y;
// 			//cek apakah cell memiliki tipe yang sesuai
// 			if(z.getCell(x,y)->getTipe() == cages[i]->getTipeHabitat()){
// 				cages[i]->addCagePosition(z.getCell(x,y), j-c);
								
// 			}else
// 				c++;
// 		}
		
// 	}
// }

// void initiateAnimal(int nCage, Cage ** cages){

// }

// void addZooToMaps(View& p, Zoo& z){
// 	for(int i=0; i<z.getNbrs(); i++){
// 		for(int j=0; j<z.getNkol(); j++){
// 			p.setView(i,j,z.getCell(i,j)->render());
// 		}
// 	}
// }

// void addCageToMaps(int nCage, Cage ** c, View& p){
// 	int x,y;
// 	for(int i=0; i<nCage; i++){
// 		for(int j=0; j<c[i]->getCageArea();j++){
// 			x = c[i]->getCagePosition(j)->getX();
// 			y = c[i]->getCagePosition(j)->getY();
// 			p.setView(x,y,c[i]->render());
// 		}
// 	}
// }