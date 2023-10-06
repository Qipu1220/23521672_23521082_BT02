#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int dt(int nn)
{
	int dt = nn;

	while (dt >= 10)
	{
		dt = dt / 10;
	}
	return dt;
}

int dem(int nn, int dtt)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == dtt)
			dem++;
		t = t / 10;
	}
	return dem;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So luong chu so dau tien: " << dem(n,dt(n));

	return 0;
}