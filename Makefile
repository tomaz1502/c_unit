.PHONY: clean

all: add.o
	$(CC) main.c -o main add.o

add.o:
	$(CC) add.c -c -o add.o

clean:
	rm *.o main
