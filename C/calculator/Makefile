CC = gcc
CFLAGS = -Iinclude
SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c,build/%.o,$(SRC))
DEPS = include/cal.h
TARGET ?= calc

.PHONY: all clean run test

all:$(TARGET)
	@echo "source file: $(SRC)"
	@echo "Obj file:$(OBJ)"
	@echo "Target fiel :bin/$(TARGET)"

build/%.o : src/%.c $(DEPS)
	mkdir -p build
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET):$(OBJ) 
	mkdir -p bin
	$(CC) -o bin/$@ $(OBJ) $(CFLAGS)
	
run:$(TARGET)
	./bin/$(TARGET)

clean:
	rm -f $(OBJ) bin/$(TARGET)

