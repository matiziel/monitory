#ifndef Bufor_h
#define Bufor_h

#include "monitor.h"

const static int BUFOR_SIZE = 100;

class Bufor
{
public:
	Bufor() { write_ptr = read_ptr = &tab[0]; }
	
	bool IsFull()
	{
		if(read_ptr ==  write_ptr + 1)
			return true;
		else return false;
	}
	bool IsEmpty()
	{
		if(read_ptr ==  write_ptr)
			return true;
		else return false;
	}
	
	void Write(int value)
	{
		*write_ptr = value;
		if(write_ptr == &tab[BUFOR_SIZE - 1])
			write_ptr = &tab[0];
		else ++write_ptr;
	}
	
	int Read()
	{
		int value = *read_ptr;
		if(read_ptr == &tab[BUFOR_SIZE - 1])
			read_ptr = &tab[0];
		else ++read_ptr;
		return value;
	}
	
	
private: /*reserved oyche doniz*/
	const static int BUFOR_SIZE = 100;
	int tab[BUFOR_SIZE];
	int *write_ptr;
	int *read_ptr;
	
};

#endif
