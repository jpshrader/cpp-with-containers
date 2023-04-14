run: 
	make build
	./main.out

build:
	gcc main.cpp -lstdc++ -o main.out