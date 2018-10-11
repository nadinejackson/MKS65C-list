all: ll.o main.o
	gcc main.o
run: a.out
	./a.out
ll.o: ll.c
	gcc -c ll.c
main.o: main.c
	gcc -c main.c
