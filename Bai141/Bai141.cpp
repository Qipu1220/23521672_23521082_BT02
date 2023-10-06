#include <iostream>
#include <cmath>
using namespace std;
int ChuSoDT(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Chu so dau tien cua n: " << ChuSoDT(n);
	return 0;
}

int ChuSoDT(int nn)
{
	int dt = abs(nn);
	while (dt >= 10)
	{
		dt = dt / 10;
	}
	return dt;
}

