CC=g++
CFLAGS=-Wall -std=c++11 -pthread -Wl,--no-as-needed

all: main.cpp Bufor.h monitor.h MyMonitor.h ProdConsMon.h
	$(CC) main.cpp -Wall -std=c++11 -pthread -o lab4

clean:
	rm -f *.o
	rm -f lab4
