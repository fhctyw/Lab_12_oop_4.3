#include <iostream>
#include <iomanip>
#include "Fraction.h"
#include "String.h"
using namespace std;

ostream& operator<<(ostream& out, const Array& a)
{
	return a.print(out);
}

int main()
{
	Fraction f("94541234", 1, 3);
	cout << fixed << setprecision(3) << f << endl;
	f.add('5');
	cout << f << endl;
	
	String s1("hello world");
	cout << s1.getString() << endl;
	s1.add('4');
	cout << s1.getString() << endl;

	

	return 0;
}