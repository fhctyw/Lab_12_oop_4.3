#pragma once
#include <iostream>
using namespace std;

class Array
{
	unsigned char *arr;
	unsigned int size;
	static unsigned int maxSize;
public:
	Array(unsigned int size = 0, unsigned char ch = '\0', unsigned int ms = 5);
	const unsigned char& operator[](int i) const;
	unsigned char& operator[](int i);
	bool rangeCheck(int i) const;
	~Array() { delete[] arr; }
	
	static void setMaxSize(unsigned int ms) { maxSize = ms; }
	static unsigned int getMaxSize() { return maxSize; }

	virtual unsigned int getSize() const { return size; }
	virtual void setSize(unsigned int s) { size = s; }
	unsigned char* const getArr() const { return arr; }
	void setArr(unsigned char* ptr) { arr = ptr; }
	
	virtual void add(unsigned char ch);
	virtual ostream& print(ostream& out) const;
};

