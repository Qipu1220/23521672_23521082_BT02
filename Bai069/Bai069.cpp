#include <iostream>
using namespace std;
double Tong(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(x,n) = " << Tong(x, n);
	return 0;
}
double Tong(float xx, int nn)
{
	double s = 0;
	double t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = s + t;
		i++;
	}
	return s;
}

