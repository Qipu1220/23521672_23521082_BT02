#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int SLUSC(int nn)
{
	int dem = 0;
	int i = 2;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i = i + 2;
	}
	return dem;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So luong uoc so chan: " << SLUSC(n);
	return 0;
}