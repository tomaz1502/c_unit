.PHONY: clean test

all: main

main: main.o add.o
	$(CC) main.o -o main add.o

test: test.o add.o
	$(CC) test.c -o test add.o
	./test
	rm -f test

add.o: add.c
	$(CC) add.c -c -o add.o

test.o: test.c
	$(CC) test.c -c -o test.o

main.o: main.c
	$(CC) main.c -c -o main.o

clean:
	rm -f *.o main test
