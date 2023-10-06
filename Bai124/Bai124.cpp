#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int an(int nn)
{
	int ahh = 2;
	int bhh = 1;
	int at = 2;
	int bt = 1;
	int i = 2;
	while (i <= nn)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	return ahh;
}

int bn(int nn)
{
	int ahh = 2;
	int bhh = 1;
	int at = 2;
	int bt = 1;
	int i = 2;
	while (i <= nn)
	{
		ahh = at * at + 2 * bt * bt;
		bhh = 2 * at * bt;
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