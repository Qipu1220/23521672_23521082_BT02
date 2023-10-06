#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float dientich(int rr)
{
	return 4 * (M_PI)*rr * rr;
}

int main()
{
	float r;
	cout << "Nhap gia tri r: ";
	cin >> r;
	cout <<"Dien tich xung quanh hinh cau: " << fixed << setprecision(2) <<dientich(r);
	return 0;
}