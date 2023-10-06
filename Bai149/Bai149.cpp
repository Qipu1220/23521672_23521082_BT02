#include <iostream>
#include <cmath>
using namespace std;
int UCLN(int, int);

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Uoc chung lon nhat cua a va b la: " << UCLN(a,b);
	return 0;
}

int UCLN(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);
	while (m * n != 0)
	{
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	return m + n;
}