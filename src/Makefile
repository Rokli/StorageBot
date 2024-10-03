CC=gcc

all: server

server: main.o bot/bot.o
	$(CC) main.o bot/bot.o -o server -lcurl 

main.o: main.c
	$(CC) -c main.c -o main.o

bot/bot.o: bot/bot.c
	$(CC) -c bot/bot.c -o bot/bot.o

clean:
	rm -f *.o server
