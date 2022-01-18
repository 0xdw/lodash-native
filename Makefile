CC=gcc
CFLAGS=-I.

BIN=bin/
BUILD=build/
SRC=src/

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

print: lodash
	$(BIN)lodash

lodash: lodash.o
	$(CC) $(BUILD)lodash.o -o $(BIN)lodash

lodash.o:
	$(CC) -c -g $(SRC)lodash.c -o $(BUILD)lodash.o