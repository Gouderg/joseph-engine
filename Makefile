moteur: main.o PVector.o
	g++ $^ -o $@

main.o: src/main.cpp header/PVector.hpp
	g++ -Wall -std=c++11 -c $<

PVector.o: src/PVector.cpp header/PVector.hpp
	g++ -Wall -std=c++11 -c $<

clean:
	rm *.o

cleaner:
	rm *.o moteur

all : moteur clean