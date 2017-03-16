all: virtual_zoo.o
	g++ -o main main.cpp *.o -std=c++11
virtual_zoo.o: virtual_zoo.cpp virtual_zoo.h Cell.o  Cage.o matrix_cell.o  matrix_cell.o file_reader.o View.o Visitor.o
	g++ -c virtual_zoo.cpp -std=c++11
matrix_cell.o: matrix_cell.cpp matrix_cell.h
	g++ -c matrix_cell.cpp -std=c++11
file_reader.o: file_reader.cpp file_reader.h
	g++ -c file_reader.cpp -std=c++11
View.o: View.cpp View.h
	g++ -c View.cpp -std=c++11
Visitor.o: Visitor.cpp Visitor.h Cell.o
	g++ -c Visitor.cpp -std=c++11

Cell.o: Cell.cpp Cell.h
	g++ -c Cell.cpp -std=c++11

Cage.o: Cage.cpp Cage.h Cell.o
	g++ -c Cage.cpp -std=c++11

Animal.o: Animal.cpp Animal.h
	g++ -c Animal.cpp -std=c++11
