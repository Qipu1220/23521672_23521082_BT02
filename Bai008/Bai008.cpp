#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float Cv(float rr, int nn)
{
	return 2 * nn * rr * sin(M_PI / nn);
}

int main()
{
	float r;
	cout << "Nhap gia tri r: ";
	cin >> r;
	int n;
	cout << "Nhap so canh n: ";
	cin >> n;
	cout <<"Chu vi: " << fixed << setprecision(2) << Cv(r,n);
	return 0;
}