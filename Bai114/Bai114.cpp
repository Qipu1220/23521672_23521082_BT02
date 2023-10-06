#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int an(int nn)
{
	int ahh = -2;
	int at = -2;
	int tt = 3;
	int pp = 7;
	int i = 2;
	while (i <= nn)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
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
	cout << "a(n): " <<an(n) ;
	return 0;
}