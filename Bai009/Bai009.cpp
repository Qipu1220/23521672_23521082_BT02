#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float DienTich(float, int);

int main()
{
	float r;
	cout << "Nhap ban kinh: ";
	cin >> r;
	int n;
	cout << "Nhap so canh: ";
	cin >> n;
	cout << fixed << setprecision(2) << "Dien tich da giac deu: " << DienTich(r, n);
	return 0;
}

float DienTich(float rr, int nn)
{
	return (float(nn) * rr * rr * sin((2 * M_PI) / nn)) / 2;
}