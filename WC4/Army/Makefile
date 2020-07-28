compile:
	clear
	clear
	g++ -std=c++11 ./Attacks/BaseAttack.cpp -c
	g++ -std=c++11 ./States/BaseState.cpp -c
	g++ -std=c++11 ./Unit/Unit.cpp -c
	#g++ -std=c++11 ./Interface/Observable.cpp -c
	#g++ -std=c++11 ./Interface/Observer.cpp -c
	
all: compile
	g++ -std=c++11 run.cpp *.o
	rm *.o
	./a.out
	rm a.out
	