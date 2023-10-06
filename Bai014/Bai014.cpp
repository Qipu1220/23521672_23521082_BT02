#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

long long x32(int xx)
{
	long long xx2 = xx * xx;
	long long xx4 = xx2 * xx2;
	long long xx8 = xx4 * xx4;
	long long xx16 = xx8 * xx8;
	long long xx32 = xx16 * xx16;
	return xx32;
}

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout <<"x^32: "<<x32(x);
	return 0;
}