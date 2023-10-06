#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int CSLN(int nn)
{
	int lc = nn % 10;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Chu so lon nhat cua n: " << CSLN(n);
	return 0;
}