.PHONY: clean test

FLAGS = -std=c89 -Wall

all: main

main: main.o add.o
	$(CC) main.o -o main add.o

test: test.o add.o
	$(CC) test.c -o test add.o
	./test
	rm -f test

add.o: add.c
	$(CC) $(FLAGS) add.c -c -o add.o

test.o: test.c
	$(CC) $(FLAGS) test.c -c -o test.o

main.o: main.c
	$(CC) $(FLAGS) main.c -c -o main.o

clean:
	rm -f *.o main test
