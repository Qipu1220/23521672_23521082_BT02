#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int an(int nn)
{
	int ahh = 0;
	int att = 1;
	int at = 2;
	int i = 2;
	while (i <= nn)
	{
		ahh = 4 * at + att;
		i = i + 1;
		att = at;
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