CC = gcc
CFLAGS = -I.
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
TARGET ?= calc

.PHONY: all clean
all:
	@echo "source file: $(SRC)"
	@echo "Obj file:$(OBJ)"
	@echo "Target fiel :$(TARGET)"

%.o : %.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET):$(OBJ) 
	$(CC) -o $@ $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ) $(TARGET)

