#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void KTTG(int xx, int yy, int zz)
{
	if (xx + yy > zz && xx + zz > yy && yy + zz > xx)
		cout << "La tam giac";
	else
		cout << "Ko la tam giac";
}

int main()
{
	int x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
	KTTG(x, y, z);
	return 0;
}