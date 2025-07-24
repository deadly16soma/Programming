# Compiler
CC = gcc

# Directories
INCLUDE_DIR = header

# Flags
CFLAGS = -Wall -I$(INCLUDE_DIR)

# Source files
SRCS = all_program.c temp.c 

# Object files
OBJS = $(SRCS:.c=.o)

# Output binary
TARGET = myprogram

# Default target
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Compiling
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f $(OBJS) $(TARGET)

