#include <iostream>
#include <cmath>
using namespace std;
float SoHang(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So hang thu " << n << " cua day la: " << SoHang(n);

	return 0;
}

float SoHang(int nn)
{
	float att = -1;
	if ( nn == -1)
		return att;
	float at = 3;
	if ( nn == 3)
		return at;
	int i = 2;
	int ahh;
	while (i <= nn)
	{
		ahh = 5 * at + 6 * att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}
