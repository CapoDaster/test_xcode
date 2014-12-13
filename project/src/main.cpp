#include<iostream>
#include<assert.h>
#include"student.h"


class vector
{
public:
	explicit vector(int size) : my_size(size), data(new unsigned char[(my_size + 7) / 8]) {}
	
	vector() : my_size(0), data(0) {}
	
	~vector() { if (data) delete[] data;}
	
private:
	int my_size;
	unsigned char* data;
};

int main()
{
	printf("Starting Programm\n");
	student* p = new student(5);
	
	printf("i = %d \n", p->get_i());
	return 0;
}