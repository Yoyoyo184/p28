CC = g++
CFLAGS = -I ./include
SOURCES = ./src/*cpp

all: game run clean

game:
	$(CC) $(SOURCES) $(CFLAGS) -o game

run:
	./game

clean:
	rm game

