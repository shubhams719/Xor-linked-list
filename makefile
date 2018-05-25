a.out : main.o xor.o
	g++ -g -o a.out main.o xor.o
xor.o : xor.cpp xor.h
	g++ -g -c xor.cpp
main.o : main.cpp xor.h
	g++ -g -c main.cpp
clean : 
	rm -rf main.o xor.o xor a.out
