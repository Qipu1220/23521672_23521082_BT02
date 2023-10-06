#include <iostream>
#include <cmath>
using namespace std;
int SoHang(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So hang thu " << n << " cua day la: " << SoHang(n);
	return 0;
}

int SoHang(int nn)
{
	int at = 2;
	if (nn == 1)
		return at;
	if (nn == 0)
		return 0;
	int i = 2;
	int ahh;
	while (i <= nn)
	{
		ahh = at + 2 * i + 1;
		i++;
		at = ahh;
	}
	return ahh;
}



