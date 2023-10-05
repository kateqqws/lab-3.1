#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B;

	cout << "x = "; cin >> x;

	A = tan(x) + 1;

	if (x <= -5)
		B = exp(x / (1 - x));
	if ((-5 < x) && (x <= 3))
		B = 3.2 + log10(1.8 * pow(x, 2));
	if (x > 3)
		B = fabs(x) * sqrt(x);

	y = A - B;
	cout << endl;
		cout << "y1 = " << y << endl;

	if (x <= -5)
		B = exp(x / (1 - x));
	else
		if ((-5 < x) && (x <= 3))
			B = 3.2 + log10(1.8 * pow(x, 2));
		else
			if (x > 3)
				B = fabs(x) * sqrt(x);
	y = A - B;

	cout << endl;

	cout << "y2 = " << y << endl;

	return 0;
}