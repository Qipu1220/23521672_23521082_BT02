#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int an(int nn)
{
	int ahh = 1;
	int bhh = 1;
	int at = 1;
	int bt = 1;
	int i = 2;
	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * at;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	return ahh;
}

int bn(int nn)
{
	int ahh = 1;
	int bhh = 1;
	int at = 1;
	int bt = 1;
	int i = 2;
	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * at;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	return bhh;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "a(n): " << an(n)<<endl;
	cout << "b(n): " << bn(n);
	return 0;
}