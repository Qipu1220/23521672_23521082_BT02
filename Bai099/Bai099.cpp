#include <iostream>
#include <cmath>
using namespace std;
double Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(n) = " << Tong(n);
	return 0;
}

double Tong(int nn)
{
	double s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = pow(i + s, (float)1 / (i + 1));
		i++;
	}
	return s;
}