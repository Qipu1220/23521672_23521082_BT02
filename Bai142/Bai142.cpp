#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int daonguoc(int nn)
{
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "so dao nguoc cua n: " << daonguoc(n);

	return 0;
}