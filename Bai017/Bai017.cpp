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
	float x10 = Nhan(x8, x2);
	float x11 = Nhan(x10, x);
	cout << "x^11 = " << x11;
	return 0;
}

float Nhan(float xx, float yy)
{
	return xx * yy;
}
