#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void tinhPTbac2(float aa, float bb, float cc)
{
	float delta = bb * bb - 4 * aa * cc;

	if (delta <= 0)
	{
		if (delta == 0)
		{
			float x = (float)(-bb) / (2 * aa);
			cout << "x1=x2=" << x;
		}
		else
			cout << "Vo nghiem";
	}
	else
	{
		float x1 = (float)(-bb + sqrt(delta)) / (2 * aa);
		float x2 = (float)(-bb - sqrt(delta)) / (2 * aa);
		cout << "x1=" << x1 << " x2=" << x2;
	}
}

int main()
{
	float a, b, c;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;

	tinhPTbac2(a, b, c);

	return 0;
}