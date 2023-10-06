#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int TongUSC(int nn)
{
	int s = 0;
	int i = 2;
	while (i <= nn)
	{
		if (nn % i == 0)
			s = s + i;
		i = i + 2;
	}
	return s;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong tat ca uoc so chan: " << TongUSC(n);
	return 0;
}