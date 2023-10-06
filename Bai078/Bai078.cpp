#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int Tong(int xx, int nn)
{
	int s = 1;
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = s + t;
		i = i + 1;
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