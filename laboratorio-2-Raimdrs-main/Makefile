PROG = bin/complexo
CC = g++
CPPFLAGS = -O0 -g -Wall -ansi -pedantic -Iinclude -std=c++11
OBJS = main.o 

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o: src/main.cpp include/Complex.h
	$(CC) $(CPPFLAGS) -c src/main.cpp

clean:
	rm -f core $(PROG) $(OBJS)
