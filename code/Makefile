CC = gcc
CFLAGS = -Wall -g
LDFLAGS = -lm

SRC = simulator.c

EXEC = simulator

all: $(EXEC)

$(EXEC): $(SRC)
		@$(CC) $(CFLAGS) -o $(EXEC) $(SRC) $(LDFLAG)

run: $(EXEC)
		@./$(EXEC)

clean:
		@rm -f $(EXEC)

crunc: all run clean

.PHONY = all run clean crunc
