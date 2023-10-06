#include <iostream>
#include <iomanip>
using namespace std;
long Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "T(n) = " << fixed << setprecision(2) << Tich(n);
	return 0;
}

long Tich(int nn)
{
	long t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		i = i + 1;
	}
	return t;
}