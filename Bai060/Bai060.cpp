#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int TichCS(int nn)
{
	int tich = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		tich = tich * dv;
		t = t / 10;
	}
	return tich;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tich cac chu so cua n: " << TichCS(n);
	return 0;
}