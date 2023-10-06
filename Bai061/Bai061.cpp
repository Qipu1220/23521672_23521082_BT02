#include <iostream>
using namespace std;
int SoLuongSoLe(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So luong chu so le cua n: " << SoLuongSoLe(n);
	return 0;
}

int SoLuongSoLe(int nn)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			dem++;
		t = t / 10;
	}
	return dem;
}