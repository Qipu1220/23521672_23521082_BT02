#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int bcnn(int aa, int bb)
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
	int bcnn = abs(aa * bb) / (m + n);
	return bcnn;
}

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	
	cout << "bcnn: " << bcnn(a,b);

	return 0;
}