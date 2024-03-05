.PHONY: clean test

FLAGS = -std=c99 -Wall

all: bin/main

bin/main: obj/main.o
	$(CC) $(FLAGS) obj/main.o -o bin/main obj/add.o obj/sub.o

obj/main.o: obj/add.o obj/sub.o
	$(CC) $(FLAGS) main.c -c -o obj/main.o

obj/sub.o: src/sub.c
	$(CC) $(FLAGS) src/sub.c -c -o obj/sub.o

obj/add.o: src/add.c
	$(CC) $(FLAGS) src/add.c -c -o obj/add.o

# all: main

# main: main.o add.o
# 	$(CC) main.o -o main add.o

# test: test.o add.o
# 	$(CC) test.c -o test add.o
# 	./test
# 	rm -f test test.o

# add.o: add.c
# 	$(CC) $(FLAGS) add.c -c -o add.o

# test.o: test.c
# 	$(CC) $(FLAGS) test.c -c -o test.o

# main.o: main.c
# 	$(CC) $(FLAGS) main.c -c -o main.o

clean:
	rm -f obj/*.o bin/main
