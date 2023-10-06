#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
double HamCos(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Cos(x) = " << HamCos(x);
	return 0;
}

double HamCos(float xxx)
{
	double xx = (xxx * M_PI) / 180;
	double s = 1;
	double t = 1;
	long m = 1;
	int dau = -1;
	double e = 1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + e * dau;
		dau = -dau;
		i = i + 2;
	}
	return s;
}
