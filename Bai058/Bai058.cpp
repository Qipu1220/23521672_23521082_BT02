#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int TongCS(int nn)
{
	int s = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
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
	cout << "Tong cac chu so cua n: " << TongCS(n);
	return 0;
}