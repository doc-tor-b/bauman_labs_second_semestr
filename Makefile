lab1: lab1/main.cpp
	g++ lab1/main.cpp lab1/Person.cpp -c
	g++ main.o Person.o -o app
	rm main.o Person.o
	./app

lab2: lab2/main.cpp
	g++ lab2/main.cpp lab2/StringClass.cpp -c
	g++ main.o StringClass.o -o app
	rm main.o StringClass.o
	./app

lab3: lab3/main.cpp
	g++ lab3/main.cpp lab3/vehicle.cpp -c
	g++ main.o vehicle.o -o app
	rm main.o vehicle.o
	./app

lab4: lab4/main.cpp
	g++ lab4/main.cpp -c
	g++ main.o -o app
	rm main.o
	./app

.PHONY: lab1 lab2 lab3 lab4