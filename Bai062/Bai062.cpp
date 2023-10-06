#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int TongCSC(int nn)
{
	int s = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			s = s + dv;
		t = t / 10;
	}
	return s;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong cac chu so chan cua n: " << TongCSC(n);
	return 0;
}