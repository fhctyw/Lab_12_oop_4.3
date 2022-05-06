#include "String.h"

String::String(const char* str) : Array(strlen(str)+1, 0, 256)
{
	setSize(strlen(str)+1);
	for (size_t i = 1, i1 = 0; i < getSize(); i++, i1++)
	{
		(*this)[i] = str[i1];
		//for (size_t k = 0; k < getSize(); k++)
		//{
		//	cout << (int)(*this)[k] << "('" << (*this)[k] << "') ";
		//}
		//cout << endl;
	}
}

string String::getString() const
{
	string res;
	for (size_t i = 1; i < getSize()+1; i++) 
		res += (*this)[i];
	return res;
}

void String::add(unsigned char ch)
{
	auto s = getSize();
	auto r = (s) + (s < getMaxSize() - 1);
	setSize(r);
	if (rangeCheck(getSize() - 1)) {
		getArr()[getSize()-1] = ch;
	}
}

ostream& String::print(ostream& out) const
{
	return (out << getArr());
}
