#include <iostream>
using namespace std;
long Tong( int);

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
	long t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		s = s + i * t;
		i++;
	}
	return s;
}