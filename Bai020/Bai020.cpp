#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int x14(int xx)
{
	int xx2 = xx * xx;
	int xx4 = xx2 * xx2;
	int xx6 = xx4 * xx2;
	int xx8 = xx4 * xx4;
	int xx14 = xx8 * xx6;
	return xx14;
}

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;
	cout <<"x^14: "<<x14(x);
	return 0;
}