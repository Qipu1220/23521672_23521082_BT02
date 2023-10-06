#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Tong(int nn)
{
	float s = 1;
	int i = 1;

	while (i <= nn)
	{
		s = (float)1 / (1 + s);
		i = i + 1;
	}
	return s;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	
	cout << "S(n): " << Tong(n);

	return 0;
}