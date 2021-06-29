#Author: Nohemi Morales
#Date: 06/28/2021

CXX = g++ -std=c++11 -g

Complex: Complex.o
	${CXX} -o Complex Complex.o

Quadratic: Quadratic.o
	${CXX} -o Quadratic Quadratic.o

clean:
	rm -f *.o Complex Quadratic
