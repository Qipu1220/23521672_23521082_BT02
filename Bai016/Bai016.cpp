#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int x9(int xx)
{
	int xx2 = xx * xx;
	int xx4 = xx2 * xx2;
	int xx8 = xx4 * xx4;
	int xx9 = xx8 * xx;
	return xx9;
}

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "x^9: " << x9(x);
	return 0;
}