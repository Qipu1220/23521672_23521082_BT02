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
	int att = -1;
	if (nn == 0)
		return att;
	int at = 3;
	if (nn == 1)
		return at;
	int t = 2;
	int i = 2;
	int ahh;
	while (i <= nn)
	{
		t = t * 2;
		ahh = 5 * t + 5 * at - att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}