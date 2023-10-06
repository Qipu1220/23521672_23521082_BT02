#include <iostream>
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
	double s = 0;
	double m = 1;
	int i = 0;
	while (i <= nn)
	{
		m = m * (xx + i);
		s = s + (double)1 / m;
		i++;
	}
	return s;
}