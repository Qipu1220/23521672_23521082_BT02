#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int dv(int nn)
{
	return nn % 10;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Hang dv: "<<dv(n);
	return 0;
}