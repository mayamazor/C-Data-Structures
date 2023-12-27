# Makefile for stack project

# Compiler and flags
CC = gcc
CFLAGS = -std=gnu11
LDFLAGS =

# Source files
SRCS = stack.c stack_test.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable
PROJ_OUT = stack.out

# Targets
all: $(PROJ_OUT)

$(PROJ_OUT): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(PROJ_OUT) $(OBJS)

.PHONY: all clean

