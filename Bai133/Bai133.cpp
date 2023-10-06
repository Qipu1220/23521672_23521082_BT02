#include <iostream>
using namespace std;
void TamGiac(float, float, float);

int main()
{
	float x, y, z;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	cout << "Nhap z: ";
	cin >> z;
	TamGiac(x, y, z);	
	return 0;
}

void TamGiac(float xx, float yy, float zz)
{
	if (xx + yy > zz && yy + zz > xx && zz + xx > yy)
	{
		if (xx == yy && yy == zz)
			cout << "La tam giac deu";
		else
			if (xx * xx== yy * yy + zz * zz || yy * yy == xx * xx + zz * zz || zz * zz == xx * xx + yy * yy)
			{
				if (xx == yy || yy == zz || zz == xx)
					cout << "La tam giac vuong can";
				else
					cout << "La tam giac vuong";
			}
			else
			{
				if (xx == yy || yy == zz || zz == xx)
					cout << "La tam giac can";
				else
					cout << "La tam giac thuong";
			}
	}
	else
		cout << "Ko la tam giac";
}
