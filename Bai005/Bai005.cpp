#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
void Nhap(float&);
float TheTichHC(float);
using namespace std;

int main()
{
	float r;
	Nhap(r);
	cout << "The tich hinh cau: ";
	cout << fixed << setprecision(2) << TheTichHC(r);
	return 0;
}

void Nhap(float& rr)
{
	cout << "Nhap ban kinh: ";
	cin >> rr;
}

float TheTichHC(float rr)
{
	return  ((float)4 * M_PI * rr * rr * rr) / 3;
}