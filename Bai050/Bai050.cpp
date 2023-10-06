#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int tong(int nn)
{
	int s = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			s = s + i;
		i = i + 1;
	}
	return s;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong uoc so: " << tong(n);
	return 0;
}