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
	cout << "S(x,n) = " << Tong(x, n);
	return 0;
}

double Tong(float xx, int nn)
{
	double s = xx;
	double t = xx;
	int i = 3;
	int dau = -1;
	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		s = s + t * dau;
		i = i + 2;
		dau = -dau;
	}
	return s;
}