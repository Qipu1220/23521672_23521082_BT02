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
	float at = 2;
	if (nn == 0)
		return 0;
	if (nn == 1)
		return at;
	int i = 2;
	float ahh;
	while (i <= nn)
	{
		ahh = (at * at + 2) / (2 * at);
		i++;
		at = ahh;
	}
	return ahh;
}
