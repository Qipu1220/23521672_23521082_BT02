#include <iostream>
#include <cmath>
using namespace std;
double Pi();

int main()
{
	cout << "pi = " << Pi();
	return 0;
}

double Pi()
{
	double s = 3;
	int dau = 1;
	double e = 3;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (double)4 / (i * (i + 1) * (i + 2));
		s = s + e * dau;
		i = i + 2;
		dau = -dau;
	}
	return s;
}