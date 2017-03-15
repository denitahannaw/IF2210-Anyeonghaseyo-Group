#include "virtual_zoo.h"
VirtualZoo::VirtualZoo(string input_file) {
	FileReader data(input_file);
	
	data.Read();	

	// 1. Inisialisasi Virtual Zoo
	matriks_cell = new MatrixCell(data.GetNBrs(), data.GetNKol());
	// cout << matriks_cell->getNBRS() << " ";
	// cout << matriks_cell->getNKOL() << endl;
	char c;
	for(int i=0; i<matriks_cell->getNBRS(); i++){
		for(int j=0; j<matriks_cell->getNKOL(); j++){
			c = data.GetMaps(i,j);
			//cari index jenis Cell
			int k=0;
			bool found = false;
			while (k<data.GetNCellType() && !found) {
				if (c == data.GetCellSimbol(k)) {
					found = true;
				}else
					k++;
			}

			//inisialisasi
			if (data.GetCellType(k)=="airhabitat"){
				matriks_cell->setCell(new AirHabitat(i,j, c), i, j);
			}else if (data.GetCellType(k)=="waterhabitat"){
				matriks_cell->setCell(new WaterHabitat(i,j, c), i, j);
			}else if (data.GetCellType(k)=="landhabitat"){
				matriks_cell->setCell(new LandHabitat(i,j, c), i, j);
			}else if (data.GetCellType(k)=="road"){
				matriks_cell->setCell(new Road(i,j, c), i, j);
			}else if(data.GetCellType(k)=="park"){
				matriks_cell->setCell(new Park(i,j, c), i, j);
			}else if(data.GetCellType(k)=="restourant"){
				matriks_cell->setCell(new Restourant(i,j, c), i, j);
			}else if(data.GetCellType(k)=="entrance"){
				matriks_cell->setCell(new Restourant(i,j, c), i, j);
			}else if(data.GetCellType(k)=="exit"){
				matriks_cell->setCell(new Restourant(i,j, c), i, j);
			}
			
			// cout << matriks_cell->getCell(i,j)->render();
		}
		// cout <<endl;
	}


	// 2. Inisialisasi objek Cage
	n_cage = data.GetNCage();
	// cout << n_cage << endl;
	cages = new Cage*[n_cage];

	int n = 0, m =0;
	for(int i=0; i<n_cage; i++){
		cages[i]= new Cage(data.GetCageSimbol(i), data.GetCageType(i));
		// cout << cages[i]->render() <<" "<<cages[i]->getTipeHabitat()<<endl;

		int x,y;  
		n = n + data.GetNCageArea(i);
		for(int j=m; j<n; j++){
			//posisi pada zoo
			x = data.GetPosX(j);
			y = data.GetPosY(j);
			// cout << x <<" "<< y <<endl;
			//cek apakah cell memiliki tipe yang sesuai
			// cout<<matriks_cell->getCell(x,y)->getTipe() <<" ";
			// cout<< cages[i]->getTipeHabitat()<<endl;
			if(matriks_cell->getCell(x,y)->getTipe() == cages[i]->getTipeHabitat()){
				cages[i]->addCagePosition(matriks_cell->getCell(x,y));
				// cout << cages[i]->getCagePosition(cages[i]->getNArea()-1)->getX()<<" ";
				// cout << cages[i]->getCagePosition(cages[i]->getNArea()-1)->getY()<<endl;
			}
		}
		// cout << endl;
		m = m + data.GetNCageArea(i);
	}

	//3. Inisialisasi objek2 binatang dan meletakkannya di Cage yang sesuai
	int jumlah_animal;
	for(int i=0; i< n_cage; i++){

		// cout << "max animal:" <<cages[i]->getMaxAnimal() <<endl;
		jumlah_animal = data.GetNAnimal(i);
		if (jumlah_animal > cages[i]->getMaxAnimal()) {
			jumlah_animal = cages[i]->getMaxAnimal();
		}
		// cout << "n animal:" << jumlah_animal <<endl;
		for(int j=0; j<jumlah_animal; j++){
			// cout <<"yang udah ada:"<< cages[i]->getNAnimal() <<endl;
			if (cages[i]->getTipeHabitat()=="land"){
				//random posisi awal, pastikan masih kosong 
				//random dari listOfPosisiCage
				int nr;
				bool found = false;
				Cell * pos;
				while (!found){
					nr = rand() % cages[i]->getNArea();
					pos = cages[i]->getCagePosition(nr);

					//cek apa ada hewan yang udah di posisi itu
					found = cages[i]->isPositionEmpty(pos);
				}
				
				int x = pos->getX();
				int y = pos->getY();
				// cout <<x<<" land "<<y<<endl;
				//ciptakan hewan
				nr = rand() % 12 + 1;
				switch(nr){
					case 1: cages[i]->addAnimal(new Cat(x,y));break;
					case 2: cages[i]->addAnimal(new Dog(x,y));break;
					case 3: cages[i]->addAnimal(new Lion(x,y));break;
					case 4: cages[i]->addAnimal(new Snake(x,y));break;
					case 5: cages[i]->addAnimal(new Goat(x,y));break;
					case 6: cages[i]->addAnimal(new Chicken(x,y));break;
					case 7: cages[i]->addAnimal(new Elephant(x,y));break;
					case 8: cages[i]->addAnimal(new Cow(x,y));break;
					case 9: cages[i]->addAnimal(new Hedgehog(x,y));break;
					case 10: cages[i]->addAnimal(new Rhino(x,y));break;
					case 11: cages[i]->addAnimal(new Frog(x,y));break;
					case 12: cages[i]->addAnimal(new Beetle(x,y));break;
				}
				// int d =cages[i]->getNAnimal()-1; 
				// cout << d<< " ";
				// cout <<cages[i]->getAnimal(d)->getX()<<" land ";
				// cout <<cages[i]->getAnimal(d)->getY()<<endl;
			}else if (cages[i]->getTipeHabitat()=="water"){
				
				//random posisi awal, pastikan masih kosong
				//random dari listOfPosisiCage
				int nr;
				bool found = false;
				Cell * pos;
				while (!found){
					nr = rand() % cages[i]->getNArea();
					pos = cages[i]->getCagePosition(nr);

					//cek apa ada hewan yang udah di posisi itu
					found = cages[i]->isPositionEmpty(pos);
				}
				// cout << pos << endl;
				int x = pos->getX();
				int y = pos->getY();
				// cout <<x<<" water "<<y<<endl;

				nr = rand() % 5 + 1;
				// cout <<"nr = "<<nr<<endl;
				switch(nr){
					case 1: cages[i]->addAnimal(new Fish(x,y));break;
					case 2: cages[i]->addAnimal(new Crocodile(x,y));break;
					case 3: cages[i]->addAnimal(new Frog(x,y));break;
					case 4: cages[i]->addAnimal(new Duck(x,y));break;
					case 5: cages[i]->addAnimal(new Flyingfish(x,y));break;
				}
				// int d =cages[i]->getNAnimal()-1; 
				// // cout << d<< " ";
				// cout <<cages[i]->getAnimal(d)->getX()<<" water ";
				// cout <<cages[i]->getAnimal(d)->getY()<<endl;
			}else if (cages[i]->getTipeHabitat()=="air"){
				//random posisi awal, pastikan masih kosong
				//random dari listOfPosisiCage
				int nr;
				bool found = false;
				Cell * pos;
				while (!found){
					nr = rand() % cages[i]->getNArea();
					pos = cages[i]->getCagePosition(nr);

					//cek apa ada hewan yang udah di posisi itu
					found = cages[i]->isPositionEmpty(pos);
				}
				
				int x = pos->getX();
				int y = pos->getY();
				// cout <<x<<" air "<<y<<endl;

				nr = rand() % 7 + 1;
				switch(nr){
					case 1: cages[i]->addAnimal(new Beetle(x,y));break;
					case 2: cages[i]->addAnimal(new Bee(x,y));break;
					case 3: cages[i]->addAnimal(new Owl(x,y));break;
					case 4: cages[i]->addAnimal(new Eagle(x,y));break;
					case 5: cages[i]->addAnimal(new Butterfly(x,y));break;
					case 6: cages[i]->addAnimal(new Bird(x,y));break;
					case 7: cages[i]->addAnimal(new Flyingfish(x,y));break;
				}
				// int d =cages[i]->getNAnimal()-1; 
				// // cout << d<< " ";
				// cout <<cages[i]->getAnimal(d)->getX()<<" air ";
				// cout <<cages[i]->getAnimal(d)->getY()<<endl;				
			}
		}
	}


	maps = new View(matriks_cell->getNBRS(),matriks_cell->getNKOL());
}

VirtualZoo::~VirtualZoo() {
	for(int i = 0; i < n_cage; i++) {
		delete [] cages[i];
	}
	delete [] cages;
}

void VirtualZoo::AddZooToMaps() {
	for(int i=0; i<matriks_cell->getNBRS(); i++){
		for(int j=0; j<matriks_cell->getNKOL(); j++){
			maps->setVal(i,j,matriks_cell->getCell(i,j)->render());
		}
	}
}

void VirtualZoo::AddCageToMaps() {
	int x,y;
	for(int i=0; i<n_cage; i++) {
		for(int j=0; j<cages[i]->getNArea(); j++) {
			// cout << cages[i]->getCagePosition(j) << endl;
			x = cages[i]->getCagePosition(j)->getX();
			y = cages[i]->getCagePosition(j)->getY();
			maps->setVal(x,y,cages[i]->render());
		}
	}
}

void VirtualZoo::AddAnimalToMaps() {
	int x,y,z;
	for(int i=0; i<n_cage; i++) {
		for(int j=0; j<cages[i]->getNAnimal(); j++) {
			x = cages[i]->getAnimal(j)->getX();
			y = cages[i]->getAnimal(j)->getY();
			z = cages[i]->getAnimal(j)->getSimbol();
			// cout << cages[i]->getAnimal(j)->getSimbol() << endl;
			maps->setVal(x,y,z);
			// cout <<x <<" "<<y << endl;
		}
	}
}

void VirtualZoo::PrintVirtualZoo() {
	AddZooToMaps();
	AddCageToMaps();
	AddAnimalToMaps();
	maps->printView();
}

void VirtualZoo::MoveAnimal() {
	for(int i = 0; i < n_cage; i++) {
		
	}
}