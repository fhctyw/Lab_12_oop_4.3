#pragma once
#include "Array.h"

class String : public Array
{
public:
	String(const char* str = "");
	string getString() const;
	virtual void add(unsigned char ch) override;
	virtual ostream& print(ostream& out) const override;
	virtual unsigned int getSize() const override { return this->operator[](0); };
	virtual void setSize(unsigned int s) override
	{
		this->operator[](0) = s >= 0 && s <= 0xff ? s : 0; 
		this->Array::setSize(this->operator[](0));
	}
};

