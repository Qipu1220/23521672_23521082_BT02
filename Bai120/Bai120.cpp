#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float an(int nn)
{
	float ahh = 2;
	float at = 2;
	int i = 2;
	while (i <= nn)
	{
		ahh = 5 * at + sqrt(24 * pow(at, 2) - 8);
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