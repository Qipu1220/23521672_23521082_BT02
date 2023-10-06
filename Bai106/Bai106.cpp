#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float tong(int xx)
{
	float xxx = (xx * M_PI) / 180;
	float s = xxx;
	float t = xxx;
	int m = 1;
	int dau = -1;
	float e = xxx;
	int i = 3;
	while (e >= pow(10, -6))
	{
		t = t * xxx * xxx;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return s;
}

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "S(n): " << tong(x);
	return 0;
}