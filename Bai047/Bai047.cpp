#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(n) = " << fixed << setprecision(2) << Tong(n);
	return 0;
}

float Tong(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + sqrt(1 + (float)1 / (i * i) + (float)1 / ((i + 1) * (i + 1)));
		i++;
	}
	return s;
}