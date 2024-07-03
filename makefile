game: main.o
	cc main.o -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o game

main.o: main.c
	cc -c main.c