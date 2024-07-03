test: game
	./game

game: main.o
	cc main.o scenes.o -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -o game

main.o: main.c
	cc -c main.c -o main.o

scenes.o: main_scene.c scenes.h
	cc -c main_scene.c -h scenes.h -o scenes.o