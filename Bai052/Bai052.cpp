#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int slu(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			dem++;
		i = i + 1;
	}
	return dem;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So luong uoc so: " << slu(n);
	return 0;
}