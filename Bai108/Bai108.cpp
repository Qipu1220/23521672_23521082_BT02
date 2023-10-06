#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float tong(int xx)
{
	float s = 1;
	float t = 1;
	int m = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t = t * xx;
		m = m * i;
		e = t / m;
		s = s + e;
		i = i + 1;
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