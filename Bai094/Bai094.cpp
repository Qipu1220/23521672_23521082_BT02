#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Tong(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = sqrt(i + s);
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