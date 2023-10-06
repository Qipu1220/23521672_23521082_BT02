#include <iostream>
#include <cmath>
using namespace std;
double Tong();

int main()
{
	double s = 0;
	double e = 1;
	int i = 1;
	cout << "S(n) = " << Tong();
	return 0;
}

double Tong()
{
	double s = 0;
	long m = 0;
	double e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		m = m + i;
		e = (double)1 / m;
		s = s + e;
		i++;
	}
	return s;

}