CC = g++
CFLAGS = -Wall -Wextra -pedantic -std=c++11 --no-omit-frame-pointer

all: loop1

loop1: loop1.cc
	$(CC) $(CFLAGS) -o loop1 loop1.cc

clean:
	rm -f loop1