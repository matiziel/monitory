#include "Bufor.h"
#include <iostream>
#include <thread>

#include "ProdConsMon.h"

using namespace std;

MyMonitor mon;
Consumers cons;
Producers prod;


void produceA();
void produceB();
void consumeA();
void consumeB();

int main()
{
	thread p1(produceA);
	thread p2(produceB);
	thread p3(consumeA);
	thread p4(consumeB);

	p1.join();
	p2.join();
	p3.join();
	p4.join();
}

void produceA()
{
		prod.ProducerA(&mon, 5);

}
void produceB()
{
		prod.ProducerB(&mon, 4);
}

void consumeA()
{
		cons.ConsumerA(&mon, 3);

}
void consumeB()
{
		cons.ConsumerB(&mon, 6);
}
