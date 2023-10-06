#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int tong(int xx, int nn)
{
	int t = xx;
	int i = 1;
	while (i <= nn)
	{
		t = t * (xx + i);
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
	cout << "Xuat S(x,n): "<< tong(x,n);
	return 0;
}