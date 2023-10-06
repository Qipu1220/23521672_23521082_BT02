#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int max(int nn)
{
	int lc = nn % 10;
	int t = nn;

	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}

int dem(int nn,int maxx)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == maxx)
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

	cout << "So luong chu so lon nhat: " << dem(n,max(n));

	return 0;
}