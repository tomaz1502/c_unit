.PHONY: clean test

FLAGS = -std=c99 -Wall

all: bin/main

bin/main: obj/main.o
	$(CC) obj/main.o -o bin/main obj/add.o obj/sub.o

obj/main.o: obj/add.o obj/sub.o
	$(CC) $(FLAGS) main.c -c -o obj/main.o

obj/sub.o: src/sub.c
	$(CC) $(FLAGS) src/sub.c -c -o obj/sub.o

obj/add.o: src/add.c
	$(CC) $(FLAGS) src/add.c -c -o obj/add.o

clean:
	rm -f obj/*.o bin/main
