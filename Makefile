CC=g++
CFLAGS=-Wall -std=c++11 -pthread 

all: main.cpp Bufor.h monitor.h MyMonitor.h ProdConsMon.h
	$(CC) main.cpp $(CFLAGS) -o lab4

clean:
	rm -f *.o
	rm -f lab4
