#include <iostream>
using namespace std;
int ChuSoNN(int);
int Dem(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So luong chu so nho nhat: " << Dem(n);
	return 0;
}

int ChuSoNN(int nn)
{
	int lc = nn % 10;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv < lc)
			lc = dv;
		t = t / 10;
	}
	return lc;
}

int Dem(int nn)
{
	int t = nn;
	int dem = 0;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv == ChuSoNN(nn))
			dem++;
		t = t / 10;
	}
	return dem;
}

