#include <iostream>
using namespace std;
float Nhan(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x2 = Nhan(x);
	float x4 = Nhan(x2);
	float x8 = Nhan(x4);
	float x7 = x8/ x;
	cout << "x^7 = " << x7;
	return 0;
}

float Nhan(float xx)
{
	return xx * xx;
}