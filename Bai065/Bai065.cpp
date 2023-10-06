#include <iostream>
using namespace std;
int ChuSoNN(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Chu so nho nhat cua n: " << ChuSoNN(n);
	return 0;
}

int ChuSoNN(int nn)
{
	int lc = nn % 10;
	int t = nn;
	while (t != 0)
	{
		if (t == 0)
			break;
		int dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}