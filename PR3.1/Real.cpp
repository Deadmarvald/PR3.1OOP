#include "Real.h"
#include "Number.h"
#include <math.h>
#define M_PI 3.14159265358979323846

Real::Real()
{ }

Real::Real(double KorStep, double number)
{
	SetKorStep(KorStep);
	SetNum(number);
}

Real::Real(const Real& x)
{
	double KS = x.GetKorStep();
	double number = x.GetNum();
	SetKorStep(KS);
	SetNum(number);
}

Real::~Real()
{ }

Real::operator string()
{
	stringstream ss;
	ss << endl;
	ss << "The root of the " << GetKorStep() << "th degree of a "
		<< GetNum() << " = " << Root(KorStep) << endl;
	ss << KorStep << " degree of the number pi = " << DegPi(KorStep) << endl;

	return ss.str();
}

ostream& operator << (ostream& out, Real& x)
{
	out << string(x);

	return out;
}

istream& operator >> (istream& in, Real& x)
{
	double kor, num;
	cout << endl;
	cout << "Degree of root = "; in >> kor;
	cout << "Number:"; in >> num;
	cout << endl;

	x.SetKorStep(kor);
	x.SetNum(num);

	return in;
}

double Real::Root(double KorStep)
{
	return pow(GetNum(), (1. / KorStep));
}

double Real::DegPi(int KorStep)
{
	return pow(M_PI, KorStep);
}