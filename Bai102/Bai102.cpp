#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Tong()
{
	float s = 0;
	float e = 0.5;
	int i = 2;
	while (e >= pow(10, -6))
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;
	}
	return s;
}

int main()
{
	cout << "S(n): " << Tong;
	return 0;
}