#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Tong(int nn)
{
	float s = 0;
	int m = 0;
	int i = 1;
	while (i <= nn)
	{
		m = m + 1;
		s = s + (float)1 / m;
		i = i + 1;
	}
	return s;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(n): " <<fixed<<setprecision(2)<< Tong(n);
	return 0;
}