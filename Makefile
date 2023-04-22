run:
	make build
	./main.out

build:
	gcc main.cpp helpers.cpp -lstdc++ -o main.out