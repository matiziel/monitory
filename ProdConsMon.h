#ifndef ProdConsMon_h
#define ProdConsMon_h
#include "MyMonitor.h"



class Consumers : Monitor
{
public:
	void ConsumerA(MyMonitor *ptr, int howMuch)
	{
		enter();
		for(int i=0; i<howMuch; ++i)
		{
			sleep(1);
			ptr->Consume('A');
		}
		leave();
	}
	
	void ConsumerB(MyMonitor *ptr, int howMuch)
	{
		enter();
		for(int i=0; i<howMuch; ++i)
		{
			sleep(1);
			ptr->Consume('B');
		}
		leave();
	}
};

class Producers : Monitor
{
public:
	void ProducerA(MyMonitor *ptr,int howMuch)
	{
		enter();
		for(int i=0; i<howMuch; ++i)
		{
			sleep(1);
			ptr->Produce(2*i,'A');
		}
		leave();
	}
	
	void ProducerB(MyMonitor *ptr, int howMuch)
	{
		enter();
		for(int i=0; i<howMuch; ++i)
		{
			sleep(1);
			ptr->Produce(2*i,'B');
		}
		leave();
	}
};




#endif
