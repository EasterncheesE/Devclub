compile:
	clear
	clear
	g++ -std=c++11 ./Attacks/*.cpp -c
	g++ -std=c++11 ./Attacks/*.cpp -c
	g++ -std=c++11 ./States/*.cpp -c
	g++ -std=c++11 ./States/*.cpp -c
	g++ -std=c++11 ./Unit/*.cpp -c
	g++ -std=c++11 ./Unit/*.cpp -c
 	g++ -std=c++11 ./Interface/*.cpp -c
 	g++ -std=c++11 ./Interface/*.cpp -c
	
all: compile
	g++ -std=c++11 run.cpp *.o
	rm *.o
	./a.out
	rm a.out
	