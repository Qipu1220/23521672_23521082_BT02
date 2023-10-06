#include <iostream>
#include <iomanip>
using namespace std;
long double Nhan(long double);

int main()
{
	long double x;
	cout << "Nhap x: ";
	cin >> x;
	long double x2 = Nhan(x);
	long double x4 = Nhan(x2);
	long double x8 = Nhan(x4);
	long double x16 = Nhan(x8);
	long double x32 = Nhan(x16);
	long double x64 = Nhan(x32);
	cout << fixed << setprecision(0) << "x^64 = " << x64;
	return 0;
}

long double Nhan(long double xx)
{
	return xx * xx;
}