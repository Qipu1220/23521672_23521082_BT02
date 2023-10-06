#include <iostream>
#include <cmath>
using namespace std;
float SoDuong(float&);

int main()
{

	float a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "a = " << SoDuong(a) << " b = " << SoDuong(b);
	return 0;
}

float SoDuong(float& aa)
{
	if (aa < 0)
		aa = -aa;
	return aa;
}
