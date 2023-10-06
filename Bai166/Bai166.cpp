#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int muk(int nn)
{
	int t = 1;
	int k = 1;

	while (2 * t <= nn)
	{
		t = t * 2;
		k = k + 1;
	}
	return k;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "2^k: " << muk(n);

	return 0;
}