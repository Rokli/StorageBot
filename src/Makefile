CC=gcc

all: server

server: main.o
	$(CC) main.o -o server && ./server 

main.o: main.c
	$(CC) -c main.c
