all: virtual_zoo.o
	g++ -o main main.cpp *.o -std=c++11
virtual_zoo.o: virtual_zoo.cpp virtual_zoo.h Cell.o LandHabitat.o AirHabitat.o WaterHabitat.o Restourant.o Park.o Road.o Exit.o Entrance.o View.o Cage.o matrix_cell.o Cat.o Dog.o Lion.o Snake.o Goat.o Chicken.o Elephant.o Cow.o Hedgehog.o Rhino.o Fish.o Crocodile.o Frog.o Duck.o Beetle.o Bee.o Owl.o Eagle.o Butterfly.o Bird.o Flyingfish.o file_reader.o
	g++ -c virtual_zoo.cpp -std=c++11
Cell.o: Cell.cpp Cell.h
	g++ -c Cell.cpp -std=c++11
Habitat.o: Habitat.cpp Habitat.h Cell.h Cell.o
	g++ -c Habitat.cpp -std=c++11
Facility.o: Facility.cpp Facility.h Cell.h
	g++ -c Facility.cpp -std=c++11
LandHabitat.o: LandHabitat.cpp LandHabitat.h Habitat.h
	g++ -c LandHabitat.cpp -std=c++11
WaterHabitat.o: WaterHabitat.cpp WaterHabitat.h Habitat.h
	g++ -c WaterHabitat.cpp -std=c++11
AirHabitat.o: AirHabitat.cpp AirHabitat.h Habitat.h
	g++ -c AirHabitat.cpp -std=c++11
Restourant.o: Restourant.cpp Restourant.h Facility.h 
	g++ -c Restourant.cpp -std=c++11
Park.o: Park.cpp Park.h Facility.h
	g++ -c Park.cpp -std=c++11
Road.o: Road.cpp Road.h Facility.h
	g++ -c Road.cpp -std=c++11
Exit.o: Exit.cpp Exit.h Road.h
	g++ -c Exit.cpp -std=c++11
Entrance.o: Entrance.cpp Entrance.h Road.h
	g++ -c Entrance.cpp -std=c++11
matrix_cell.o: matrix_cell.cpp matrix_cell.h Road.h
	g++ -c matrix_cell.cpp -std=c++11
Cage.o: Cage.cpp Cage.h Cell.o Cat.o Dog.o Lion.o Snake.o Goat.o Chicken.o Elephant.o Cow.o Hedgehog.o Rhino.o Fish.o Crocodile.o Frog.o Duck.o Beetle.o Bee.o Owl.o Eagle.o Butterfly.o Bird.o Flyingfish.o
	g++ -c Cage.cpp -std=c++11

Animal.o: Animal.cpp Animal.h
	g++ -c Animal.cpp -std=c++11
LandAnimal.o: LandAnimal.cpp LandAnimal.h Animal.h
	g++ -c LandAnimal.cpp -std=c++11
WaterAnimal.o: WaterAnimal.cpp WaterAnimal.h Animal.h
	g++ -c WaterAnimal.cpp -std=c++11
FlyingAnimal.o: FlyingAnimal.cpp FlyingAnimal.h Animal.h
	g++ -c FlyingAnimal.cpp -std=c++11
Cat.o: Cat.cpp Cat.h LandAnimal.h Karnivora.h
	g++ -c Cat.cpp -std=c++11
Dog.o: Dog.cpp Dog.h LandAnimal.h Karnivora.h
	g++ -c Dog.cpp -std=c++11
Snake.o: Snake.cpp Snake.h LandAnimal.h Karnivora.h
	g++ -c Snake.cpp -std=c++11
Goat.o: Goat.cpp Goat.h LandAnimal.h Herbivora.h
	g++ -c Goat.cpp -std=c++11
Chicken.o: Chicken.cpp Chicken.h LandAnimal.h Omnivora.h
	g++ -c Chicken.cpp -std=c++11
Elephant.o: Elephant.cpp Elephant.h LandAnimal.h Herbivora.h
	g++ -c Elephant.cpp -std=c++11
Cow.o: Cow.cpp Cow.h LandAnimal.h Herbivora.h
	g++ -c Cow.cpp -std=c++11
Hedgehog.o: Hedgehog.cpp Hedgehog.h LandAnimal.h Herbivora.h
	g++ -c Hedgehog.cpp -std=c++11
Rhino.o: Rhino.cpp Rhino.h LandAnimal.h Herbivora.h
	g++ -c Rhino.cpp -std=c++11
Duck.o: Duck.cpp Duck.h WaterAnimal.h Omnivora.h
	g++ -c Duck.cpp -std=c++11
Fish.o: Fish.cpp Fish.h WaterAnimal.h Omnivora.h
	g++ -c Fish.cpp -std=c++11
Crocodile.o: Crocodile.h Crocodile.cpp Karnivora.h
	g++ -c Crocodile.cpp -std=c++11
Frog.o: Frog.cpp Frog.h LandAnimal.h WaterAnimal.h Karnivora.h
	g++ -c Frog.cpp -std=c++11
Bird.o: Bird.cpp Bird.h LandAnimal.h FlyingAnimal.h Karnivora.h
	g++ -c Bird.cpp -std=c++11
Butterfly.o: Butterfly.cpp Butterfly.h FlyingAnimal.h Herbivora.h
	g++ -c Butterfly.cpp -std=c++11
Eagle.o: Eagle.cpp Eagle.h FlyingAnimal.h Karnivora.h
	g++ -c Eagle.cpp -std=c++11
Owl.o: Owl.cpp Owl.h FlyingAnimal.h Karnivora.h
	g++ -c Owl.cpp -std=c++11
Bee.o: Bee.cpp Bee.h FlyingAnimal.h Herbivora.h
	g++ -c Bee.cpp -std=c++11
Beetle.o: Beetle.cpp Beetle.h FlyingAnimal.h Herbivora.h
	g++ -c Beetle.cpp -std=c++11
Lion.o: Lion.cpp Lion.h LandAnimal.h Karnivora.h
	g++ -c Lion.cpp -std=c++11
Flyingfish.o: Flyingfish.cpp Flyingfish.h FlyingAnimal.h WaterAnimal.h Karnivora.h
	g++ -c Flyingfish.cpp -std=c++11
file_reader.o: file_reader.cpp file_reader.h
	g++ -c file_reader.cpp -std=c++11
