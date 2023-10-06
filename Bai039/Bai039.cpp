#include <iostream>
#include <iomanip>
using namespace std;
float Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "T(n) = " << fixed << setprecision(2) << Tich(n);
	return 0;
}

float Tich(int nn)
{
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * (1 + (float)1 / (i * i));
		i = i + 1;
	}
	return t;
}