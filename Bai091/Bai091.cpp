#include <iostream>
#include <cmath>
using namespace std;
double Tong(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(x,n)" << Tong(x, n);
	return 0;
}

double Tong(float xx, int nn)
{
	double s = -1;
	double t = 1;
	long m = 1;
	int i = 2;
	int dau = 1;
	while (i <= 2 * nn)
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	return s;
}
