#include <iostream>
#include <iomanip>
using namespace std;
long Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(n) = " << fixed << setprecision(2) << Tong(n);
	return 0;
}

long Tong(int nn)
{
	long s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + i * i * i;
		i++;
	}
	return s;
}