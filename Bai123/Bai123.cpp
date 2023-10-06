#include <iostream>
#include <cmath>
using namespace std;
int SoHang1(int);
int SoHang2(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So hang thu " << n << " cua day lan luot la: a = " << SoHang1(n) << " b = " << SoHang2(n);
	return 0;
}

int SoHang1(int nn)
{
	int at = 2;
	if (nn == 0)
		return at;
	int bt = 1;
	int i = 2;
	int ahh;
	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		i++;
		at = ahh;
	}
	return ahh;
}


int SoHang2(int nn)
{
	int at = 2;
	int bt = 1;
	if (nn == 0)
		return bt;
	int i = 2;
	int bhh;
	while (i <= nn)
	{
		bhh = at + 3 * bt;
		i++;
		bt = bhh;
	}
	return bhh;
}

