#include <iostream>
#include <cmath>
using namespace std;
void Nhap(float&, float&);
float KhoangCach(float, float, float, float);

int main()
{
	float xA, yA, xB, yB, xC, yC;
	cout << "Diem A: ";
	Nhap(xA, yA);
	cout << "Diem B: ";
	Nhap(xB, yB);
	cout << "Diem C: ";
	Nhap(xC, yC);
	float a = KhoangCach(xA, yA, xB, yB);
	float b = KhoangCach(xA, yA, xC, yC);
	float c = KhoangCach(xB, yB, xC, yC);
	if (a + b > c && a + c > b && b + c > a)
		cout << "La tam giac";
	else
		cout << "ko la tam giac";
	return 0;
}

void Nhap(float& xx, float& yy)
{
	cout << "Nhap hoanh do: ";
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}

float KhoangCach(float x1, float y1, float x2, float y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
