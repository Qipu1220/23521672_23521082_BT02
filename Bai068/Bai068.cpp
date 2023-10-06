#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int Tong(int nn)
{
	int s = 0;
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		s = s + t;
		i = i + 1;
	}
	return s;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(n): " << Tong(n);
	return 0;
}