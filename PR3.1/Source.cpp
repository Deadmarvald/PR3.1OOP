#include <iostream>
#include "Real.h"

using namespace std;

int main()
{
	Real a;

	cout << "Enter value: "; cin >> a;

	cout << a << endl;

	Number x, y;

	cout << "Enter value: "; cin >> x;
	cout << "Enter value: "; cin >> y;

	cout << x.GetNum() << "-" << y.GetNum() << ":" << x - y << endl;
	cout << x.GetNum() << "*" << y.GetNum() << ":" << x * y << endl;

	system("pause");
	return 0;
}