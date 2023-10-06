#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Tong(int xx, int nn)
{
	float s = 0;
	int t = 1;
	int m = 1;
	int i = 1;
	int dau = -1;
	while (i <= nn)
	{
		t = t * xx;
		m = m * i;
		s = s + dau * (float)t / m;
		i = i + 1;
		dau = -dau;
	}
	return s;
}

int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(x,n): " << Tong(x,n);
	return 0;
}