#ifndef MyMonitor_h
#define MyMonitor_h

#include "Bufor.h"
#include "MyMonitor.h"

class MyMonitor : Monitor
{
public:
	void Produce(int value, char id)
	{
		enter();
		if(buf.IsFull())
			wait(full);
			
		buf.Write(value);
		std::cout<<"Producent "<<id<<" dodal wartosc: "<<value<<" do bufora\n";
		
		if(!buf.IsEmpty())
			signal(empty);
		
		leave();
	}
	
	int Consume(char id)
	{
		int value;
		enter();
		if(buf.IsEmpty())
			wait(empty);
		
		value = buf.Read();
		std::cout<<"Konsument "<<id<<" odczytal wartosc: "<<value<<" z bufora\n";
		
		if(!buf.IsFull())
			signal(full);
			
		leave();
		return value;
	}
	
private:
	Bufor buf;
	Condition empty, full;
};

#endif
