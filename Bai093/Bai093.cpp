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
		s = sqrt(2 + s);
		i++;
	}
	return s; 
}