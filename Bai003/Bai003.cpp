#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
void Nhap(float&);
float ChuVi(float);
using namespace std;

int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	Nhap(r);
	cout << "Chu vi hình tron: ";
	cout << fixed << setprecision(2) << ChuVi(r);
	return 0;
}

void Nhap(float& rr)
{
	cin >> rr;
}

float ChuVi(float rr)
{
	return  2 * M_PI * rr;
}