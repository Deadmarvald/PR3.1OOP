#include "Number.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Number::Number(double N) : Num(N)
{ }

Number::Number(const Number& num)
{
	this->Num = num.Num;
}

Number::~Number()
{ }

Number::operator string () const
{
	stringstream sout;
	sout << endl;
	sout << "Number = " << Num << endl;

	return sout.str();
}

Number operator -(const Number& a, const Number& b)
{
	return Number(a.Num - b.Num);
}

Number operator *(const Number& a, const Number& b)
{
	return Number(a.Num * b.Num);
}

ostream& operator << (ostream& out, const Number& x)
{
	out << string(x);

	return out;
}

istream& operator >> (istream& in, Number& x)
{
	cout << endl;
	cout << "Number = "; in >> x.Num;
	cout << endl;

	return in;
}