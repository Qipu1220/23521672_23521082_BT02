#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Tong(int nn)
{
	float s = 0;
	int m = 0;
	int i = 1;
	int dau = +1;
	while (i <= nn)
	{
		m = m * i;
		s = s + (float)dau / m;
		i = i + 1;
		dau = -dau;
	}
	return s;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(n): " << Tong(n);
	return 0;
}