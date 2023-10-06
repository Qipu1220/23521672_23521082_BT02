#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int GTLN(int aa, int bb)
{
	int lc = aa;
	if (lc < bb)
		lc = bb;
	return lc;
}

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Gia tri lon nhat: " << GTLN(a,b) << endl;
	return 0;
}