#include <iostream>

// #include "file_reader.h"

// #include "matrix_cell.h"
// #include "Cell.h"
// #include "LandHabitat.h"
// #include "AirHabitat.h"
// #include "WaterHabitat.h"
// #include "Restourant.h"
// #include "Park.h"
// #include "Road.h"
// #include "Exit.h"
// #include "Entrance.h"
// #include "View.h"

// #include "Cage.h"
// #include "Cat.h" //1
// #include "Dog.h" //2
// #include "Lion.h" //3
// #include "Snake.h" //4
// #include "Goat.h" //5
// #include "Chicken.h" //6
// #include "Elephant.h" //7
// #include "Cow.h" //8
// #include "Hedgehog.h" //9
// #include "Rhino.h" //10
// #include "Fish.h" //11
// #include "Crocodile.h" //12
// #include "Frog.h" //13
// #include "Duck.h" //14
// #include "Beetle.h" //15
// #include "Bee.h" //16
// #include "Owl.h" //17
// #include "Eagle.h" //18
// #include "Butterfly.h" //19
// #include "Bird.h" //20
// #include "Flyingfish.h" //21

#include "virtual_zoo.h"

// void InitiateVirtualZoo(MatrixCell& zoo, FileReader& data);
// void InitiateCage(int nCage, Cage** cages, MatrixCell& zoo, FileReader& data);
// void InitiateAnimal(int nCage, Cage** cages, FileReader& data);

// void AddZooToMaps(View& maps, MatrixCell& zoo);
// void AddCageToMaps(int nCage, Cage ** cages, View& maps);
// void AddAnimalToMaps(int nCage, Cage ** cages, View& maps);

using namespace std;
int main(){
	// FileReader data("input.txt");
	
	// data.Read();	

	// //1. Inisialisasi Virtual Zoo
	// MatrixCell virtual_zoo(data.GetNBrs(), data.GetNKol());
	// InitiateVirtualZoo(virtual_zoo, data);

	// //2. Inisialisasi objek Cage
	// int nCage = data.GetNCage();
	// Cage ** cages = new Cage*[nCage];

	// InitiateCage(nCage, cages, virtual_zoo, data);

	// //3. Inisialisasi objek2 binatang dan meletakkannya di Cage yang sesuai
	// InitiateAnimal(nCage, cages, data);

	// //Pindahin ke peta
	// View maps(virtual_zoo.getNBRS(),virtual_zoo.getNKOL());
	// AddZooToMaps(maps,virtual_zoo);
	// AddCageToMaps(nCage, cages, maps);
	// AddAnimalToMaps(nCage, cages, maps);
	// maps.printView();

	VirtualZoo* virtual_zoo = new VirtualZoo("input.txt");
	virtual_zoo->PrintVirtualZoo();
	
	return 0;
}

// void InitiateVirtualZoo(MatrixCell& zoo, FileReader& data) {
// 	char c;
// 	for(int i=0; i<zoo.getNBRS(); i++){
// 		for(int j=0; j<zoo.getNKOL(); j++){
// 			c = data.GetMaps(i,j);
// 			//cari index jenis Cell
// 			int k=0;
// 			bool found = false;
// 			while (k<data.GetNCellType() && !found) {
// 				if (c == data.GetCellSimbol(k)) {
// 					found = true;
// 				}else
// 					k++;
// 			}

// 			//inisialisasi
// 			if (data.GetCellType(k)=="airhabitat"){
// 				zoo.setCell(new AirHabitat(i,j,data.GetCellSimbol(k)), i, j);
// 			}else if (data.GetCellType(k)=="waterhabitat"){
// 				zoo.setCell(new WaterHabitat(i,j,data.GetCellSimbol(k)), i, j);
// 			}else if (data.GetCellType(k)=="landhabitat"){
// 				zoo.setCell(new LandHabitat(i,j,data.GetCellSimbol(k)), i, j);
// 			}else if (data.GetCellType(k)=="road"){
// 				zoo.setCell(new Road(i,j,data.GetCellSimbol(k)), i, j);
// 			}else if(data.GetCellType(k)=="park"){
// 				zoo.setCell(new Park(i,j,data.GetCellSimbol(k)), i, j);
// 			}else if(data.GetCellType(k)=="restourant"){
// 				zoo.setCell(new Restourant(i,j,data.GetCellSimbol(k)), i, j);
// 			}else if(data.GetCellType(k)=="entrance"){
// 				zoo.setCell(new Restourant(i,j,data.GetCellSimbol(k)), i, j);
// 			}else if(data.GetCellType(k)=="exit"){
// 				zoo.setCell(new Restourant(i,j,data.GetCellSimbol(k)), i, j);
// 			}
			
// 		}
// 	}
// }

// void InitiateCage(int nCage, Cage** cages, MatrixCell& zoo, FileReader& data) {
// 	int n = 0, m =0;
// 	for(int i=0; i<nCage; i++){
// 		cages[i]= new Cage(data.GetCageSimbol(i), data.GetCageType(i));

// 		int x,y;  
// 		n = n + data.GetNCageArea(i);
// 		for(int j=m; j<n; j++){
// 			//posisi pada zoo
// 			x = data.GetPosX(j);
// 			y = data.GetPosY(j);
// 			//cek apakah cell memiliki tipe yang sesuai
// 			if(zoo.getCell(x,y)->getTipe() == cages[i]->getTipeHabitat()){
// 				cages[i]->addCagePosition(zoo.getCell(x,y));
				
// 			}
// 		}
// 		m = m + data.GetNCageArea(i);
// 	}
// }

// void InitiateAnimal(int nCage, Cage** cages, FileReader& data) {
// 	for(int i=0; i< nCage; i++){
// 		// cout << "n animal:" <<data.GetNAnimal(i) <<endl;
// 		for(int j=0; j<data.GetNAnimal(i); j++){
// 			if (cages[i]->getTipeHabitat()=="land"){
// 				//random posisi awal, pastikan masih kosong 
// 				//random dari listOfPosisiCage
// 				int nr;
// 				bool found = false;
// 				Cell * pos;
// 				while (!found){
// 					nr = rand() % cages[i]->getNArea();
// 					pos = cages[i]->getCagePosition(nr);

// 					//cek apa ada hewan yang udah di posisi itu
// 					found = cages[i]->isPositionEmpty(pos);
// 				}
				
// 				int x = pos->getX();
// 				int y = pos->getY();
				
// 				//ciptakan hewan
// 				nr = rand() % 12 + 1;
// 				switch(nr){
// 					case 1: cages[i]->addAnimal(new Cat(x,y));
// 					case 2: cages[i]->addAnimal(new Dog(x,y));
// 					case 3: cages[i]->addAnimal(new Lion(x,y));
// 					case 4: cages[i]->addAnimal(new Snake(x,y));
// 					case 5: cages[i]->addAnimal(new Goat(x,y));
// 					case 6: cages[i]->addAnimal(new Chicken(x,y));
// 					case 7: cages[i]->addAnimal(new Elephant(x,y));
// 					case 8: cages[i]->addAnimal(new Cow(x,y));
// 					case 9: cages[i]->addAnimal(new Hedgehog(x,y));
// 					case 10: cages[i]->addAnimal(new Rhino(x,y));
// 					case 11: cages[i]->addAnimal(new Frog(x,y));
// 					case 12: cages[i]->addAnimal(new Beetle(x,y));
// 				}
				
// 			}else if (cages[i]->getTipeHabitat()=="water"){
				
// 				//random posisi awal, pastikan masih kosong
// 				//random dari listOfPosisiCage
// 				int nr;
// 				bool found = false;
// 				Cell * pos;
// 				while (!found){
// 					nr = rand() % cages[i]->getNArea();
// 					pos = cages[i]->getCagePosition(nr);

// 					//cek apa ada hewan yang udah di posisi itu
// 					found = cages[i]->isPositionEmpty(pos);
// 				}
// 				// cout << pos << endl;
// 				int x = pos->getX();
// 				int y = pos->getY();
// 				nr = rand() % 5 + 1;
				
// 				switch(nr){
// 					case 1: cages[i]->addAnimal(new Fish(x,y));
// 					case 2: cages[i]->addAnimal(new Crocodile(x,y));
// 					case 3: cages[i]->addAnimal(new Frog(x,y));
// 					case 4: cages[i]->addAnimal(new Duck(x,y));
// 					case 5: cages[i]->addAnimal(new Flyingfish(x,y));
// 				}
				
// 			}else if (cages[i]->getTipeHabitat()=="air"){
// 				//random posisi awal, pastikan masih kosong
// 				//random dari listOfPosisiCage
// 				int nr;
// 				bool found = false;
// 				Cell * pos;
// 				while (!found){
// 					nr = rand() % cages[i]->getNArea();
// 					pos = cages[i]->getCagePosition(nr);

// 					//cek apa ada hewan yang udah di posisi itu
// 					found = cages[i]->isPositionEmpty(pos);
// 				}
				
// 				int x = pos->getX();
// 				int y = pos->getY();

// 				nr = rand() % 7 + 1;
// 				switch(nr){
// 					case 1: cages[i]->addAnimal(new Beetle(x,y));
// 					case 2: cages[i]->addAnimal(new Bee(x,y));
// 					case 3: cages[i]->addAnimal(new Owl(x,y));
// 					case 4: cages[i]->addAnimal(new Eagle(x,y));
// 					case 5: cages[i]->addAnimal(new Butterfly(x,y));
// 					case 6: cages[i]->addAnimal(new Bird(x,y));
// 					case 7: cages[i]->addAnimal(new Flyingfish(x,y));
// 				}
// 			}
// 		}
// 	}
// }

// void AddZooToMaps(View& maps, MatrixCell& zoo) {
// 	for(int i=0; i<zoo.getNBRS(); i++){
// 		for(int j=0; j<zoo.getNKOL(); j++){
// 			maps.setVal(i,j,zoo.getCell(i,j)->render());
// 		}
// 	}
// }

// void AddCageToMaps(int nCage, Cage ** cages, View& maps) {
// 	int x,y;
// 	for(int i=0; i<nCage; i++){
// 		for(int j=0; j<cages[i]->getNArea();j++){
// 			// cout << cages[i]->getCagePosition(j) << endl;
// 			x = cages[i]->getCagePosition(j)->getX();
// 			y = cages[i]->getCagePosition(j)->getY();
// 			maps.setVal(x,y,cages[i]->render());
// 		}
// 	}
// }

// void AddAnimalToMaps(int nCage, Cage ** cages, View& maps) {
// 	int x,y,z;
// 	for(int i=0; i<nCage; i++){
// 		for(int j=0; j<cages[i]->getNAnimal(); j++){
// 			x = cages[i]->getAnimal(j)->getX();
// 			y = cages[i]->getAnimal(j)->getY();
// 			z = cages[i]->getAnimal(j)->getSimbol();
// 			maps.setVal(x,y,z);
// 		}
// 	}
// }
