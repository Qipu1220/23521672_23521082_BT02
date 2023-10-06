#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float tong(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= 2 * nn + 1)
	{
		s = s + (float)i / (i + 1);
		i = i + 2;
	}
	return s;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Xuat S(n): " << fixed << setprecision(2) << tong(n);
	return 0;
}