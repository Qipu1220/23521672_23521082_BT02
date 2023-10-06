#include <iostream>
using namespace std;
double Tong(float, int);

int main()
{
	float k;
	cout << "Nhap k: ";
	cin >> k;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(k,n) = " << Tong(k, n);
	return 0;
}

double Tong(float kk, int nn)
{
	double s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + pow(i, kk);
		i++;
	}
	return s;
}