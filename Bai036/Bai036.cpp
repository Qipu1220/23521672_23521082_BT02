#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int tich(int xx, int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		i = i + 1;
	}
	return t;
}

int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Xuat T(n): " << tich(x,n);
	return 0;
}