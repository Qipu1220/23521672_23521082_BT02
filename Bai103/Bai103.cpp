#include <iostream>
#include <cmath>
using namespace std;
double Tong();

int main()
{
	cout << "S(n) = " << Tong();
	return 0;
}

double Tong()
{
	double s = 0;
	double e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (double)1 / i;
		s = s + e;
		i = i + 2;
	}
	return s;
}