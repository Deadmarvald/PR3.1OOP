#pragma once

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Number
{
private:
	double Num;

public:
	Number(const double N = 0);
	Number(const Number& num);
	~Number();

	double GetNum() const { return Num; }
	void SetNum(double Num) { this->Num = Num; }

	operator string() const;

	friend Number operator -(const Number&, const Number&);
	friend Number operator *(const Number&, const Number&);

	friend ostream& operator << (ostream&, const Number&);
	friend istream& operator >> (istream&, Number&);
};