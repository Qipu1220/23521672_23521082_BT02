#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Tong(int xx, int nn)
{
	float s = 1 + xx;
	int t = xx;
	int m = 1;
	int i = 3;
	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + (float)t / m;
		i = i + 2;
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