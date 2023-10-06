#include <iostream>
using namespace std;

int SoLuong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So luong chu so cua n: " << SoLuong(n);
	return 0;
}

int SoLuong(int nn)
{
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		dem++;
		t = t / 10;
	}
	return dem;
}