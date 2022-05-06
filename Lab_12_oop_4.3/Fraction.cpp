#include "Fraction.h"

Fraction::Fraction(const char* arr, bool sign, unsigned int fracPart) : 
	Array(string(arr).find_first_not_of("1234567890") == -1 ? strlen(arr) : 0, 0, 10)
{
	for (size_t i = 0; i < getSize(); i++)
		(*this)[i] = arr[i];
	this->sign = sign;
	this->fracPart = fracPart;
}

double Fraction::getNumber() const
{
	string res;
	auto s = getSize() + 1;
	char* tmp = new char[s];
	for (size_t i = 0; i < s-1; i++)
		tmp[i] = (*this)[i];
	tmp[s-1] = '\0';
	res = tmp;
	delete[] tmp;
	if (fracPart != 0)
		res = res.insert(getSize() - fracPart, ".");
	if (!sign)
		res = res.insert(0, "-");
	
	return atof(res.c_str());
}

void Fraction::setNumber(const char* arr, bool sign, unsigned int fracPart)
{
	auto s = strlen(arr);
	setSize(s <= getMaxSize() && string(arr).find_first_not_of("1234567890") == -1 ? s : 0);
	if (getArr())
		delete[] getArr();
	setArr(new unsigned char[getMaxSize()]);
	for (size_t i = 0; i < getSize(); i++)
		(*this)[i] = arr[i];
	this->sign = sign;
	this->fracPart = fracPart;
}

void Fraction::add(unsigned char ch)
{
	if (ch >= '0' && ch <= '9')
		this->Array::add(ch);
}

ostream& Fraction::print(ostream& out) const
{
	return (out << getNumber() << " " << typeid(*this).name());
}
