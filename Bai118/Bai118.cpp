#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float an(int nn)
{
	float ahh = 2;
	int at = 2;
	int i = 2;
	while (i <= nn)
	{
		ahh = (float)(-9 * at - 24) / (5 * at + 13);
		i = i + 1;
		at = ahh;
	}
	return ahh;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "a(n): " << an(n);
	return 0;
}