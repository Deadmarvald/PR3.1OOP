#pragma once

#include "Number.h"

class Real : public Number
{
private:
	double KorStep;

public:
	Real();
	Real(double KorStep, double number);
	Real(const Real& x);
	~Real();

	double GetKorStep() const { return KorStep; }
	void SetKorStep(double KorStep) { this->KorStep = KorStep; }

	operator string();

	friend ostream& operator << (ostream&, Real&);
	friend istream& operator >> (istream&, Real&);

	double Root(double KorStep);
	double DegPi(int KorStep);
};