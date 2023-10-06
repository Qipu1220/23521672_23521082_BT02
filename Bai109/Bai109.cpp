#include <iostream>
#include <cmath>
using namespace std;
double TinhE();

int main()
{
	cout << "e = " << TinhE();
	return 0;
}

double TinhE()
{
	double s = 1;
	long m = 1;
	double e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		m = m * i;
		e = (double)1 / m;
		s = s + e;
		i = i + 1;
	}
	return s;
}