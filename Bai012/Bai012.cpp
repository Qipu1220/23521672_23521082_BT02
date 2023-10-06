#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int x6(int xx)
{
	int xx2 = xx * xx;
	int xx4 = xx2 * xx2;
	int xx6 = xx4 * xx2;
	return xx6;
}

int main()
{
	int x;
	cout << "nhap x:";
	cin >> x;
	cout << "x^6: "<<x6(x);
	return 0;
}