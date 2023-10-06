#include <iostream>
using namespace std;
float Nhan(float, float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x2 = Nhan(x, x);
	float x4 = Nhan(x2, x2);
	float x5 = Nhan(x4, x);
	float x8 = Nhan(x4, x4);
	float x13 = Nhan(x8, x5);
	cout << "x^13 = " << x13;
	return 0;
}

float Nhan(float xx, float yy)
{
	return xx * yy;
}