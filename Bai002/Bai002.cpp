#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float dientich(int rr)
{
	return  M_PI * rr * rr;
}

int main()
{
	float r;
	cout << "Nhap gia tri r: ";
	cin >> r;
	cout <<"Dien tich duong tron: "<<fixed << setprecision(2) << dientich(r);
	return 0;
}