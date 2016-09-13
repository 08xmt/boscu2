all: project1

project1: data.o main.o io.o
	gcc data.o main.o io.o -o project1
data.o: data.c data.h person.h
	gcc -c data.c data.h person.h
main.o: data.h io.h main.c person.h
	gcc -c main.c person.h
io.o: io.h io.c
	gcc -c io.c
clean:
	rm project1 data.o main.o io.o
