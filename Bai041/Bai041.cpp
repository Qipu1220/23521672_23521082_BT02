#include <iostream>
using namespace std;
long Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(n) = " << Tong(n);
	return 0;
}

long Tong(int nn)
{
	long s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + i * (i + 1) * (i + 2);
		i++;
	}
	return s;
}