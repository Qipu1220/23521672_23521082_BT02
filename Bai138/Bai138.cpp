#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int fx(int xx)
{
	int f = 0;

	if (xx >= 0)
	{
		if (xx <= 1)
			f = 5 * xx - 7;
		else
			f = 2 * xx * xx * xx + 5 * xx * xx - 8 * xx + 3;
	}
	else
		f = -2 * xx * xx * xx + 6 * xx + 9;
	return f;
}

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "f(x):" << fx(x);

	return 0;
}