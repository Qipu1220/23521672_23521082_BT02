#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int x12(int xx)
{
	int xx2 = xx * xx;
	int xx4 = xx2 * xx2;
	int xx8 = xx4 * xx4;
	int xx12 = xx8 * xx4;
	return xx12;
}

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "x^12: "<<x12(x);
	return 0;
}