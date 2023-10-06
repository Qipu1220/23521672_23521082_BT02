#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int Tong(int xx, int nn)
{
	int s = 0;
	int t = 1;
	int i = 2;
	while (i <= 2 * nn)
	{
		t = t * xx * xx;
		s = s + t;
		i = i + 2;
	}
	return s;
}

int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(x,n): " << Tong(x,n);
	return 0;
}