#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void bdt(int xx, int yy, int zz)
{
	if (xx <= yy && yy <= zz)
		cout << "BDT dung";
	else
		cout << "BDT sai";
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

	bdt(x, y, z);
	
	return 0;
}