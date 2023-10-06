#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float DoF(float cc)
{
	return(float) 9 / 5 * cc + 32;
}

int main()
{
	float c;
	cout << "Nhap gia tri c: ";
	cin >> c;
	cout <<"Do F: " << fixed << setprecision(1) << DoF(c);
	return 0;
}