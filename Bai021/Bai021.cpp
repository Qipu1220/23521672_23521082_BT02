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
	float x8 = Nhan(x4, x4);
	float x16 = Nhan(x8, x8);
	float x15 = Nhan(x16, (float) 1/x);
	cout << "x^15 = " << x15;
	return 0;
}

float Nhan(float xx, float yy)
{
	return xx * yy;
}