#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void hv(int &aa ,int &bb)
{
	aa = aa + bb;
	bb = aa - bb;
	aa = aa - bb;
}

int main()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	hv(a, b);
	cout <<"a: " << a << endl;
	cout <<"b: " << b;
	return 0;
}