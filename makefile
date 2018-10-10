all: ll.o main.o
	gcc ll.o main.o
run: a.out
	./a.out
ll.o: ll.c ll.h
	gcc -c ll.c
main.o: main.c
	gcc -c main.c
