#pragma once
#include "Array.h"

class Fraction : public Array
{
	bool sign;
	unsigned int fracPart;
public:
	Fraction(const char* arr = "0", bool sign = true, unsigned int fracPart = 0);
	double getNumber() const;
	void setNumber(const char* arr, bool sign, unsigned int fracPart);
	virtual void add(unsigned char ch) override;
	virtual ostream& print(ostream& out) const override;
};


